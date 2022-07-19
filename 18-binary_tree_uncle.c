#include "binary_trees.h"

/**
* binary_tree_uncle - a function that finds the uncle of a node
* @node: is a pointer to the node to find the uncle
* Return: if node as no uncle or the node or the parent is null return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent)
		return (NULL);	
	return (binary_tree_sibling(node->parent));
}

#include "binary_trees.h"

/**
* binary_tree_sibling - a function that finds the sibling of a node
* @node: is a pointer to the node to find the sibling
* Return: if node as no sibling or the node or the parent is null return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    if (node == node->parent->right)
        return (node->parent->left);
    return (node->parent->right);
}
