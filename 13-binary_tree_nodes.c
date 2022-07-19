#include "binary_trees.h"

/**
*binary_tree_nodes - a function that counts the nodes with
*at least 1 child in a binary tree
*@tree: is a pointer to the root node of the tree to count the number of nodes
*Return: the counter of 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		child = 1;
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + child);
}
