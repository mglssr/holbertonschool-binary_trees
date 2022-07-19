#include "binary_trees.h"

/**
* binary_tree_size - that measures the size of a binary tree
* @tree: is a pointer to the root node of the tree to measure the size.
* Return: the size of a binary tree or 0 if it's NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
