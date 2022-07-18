#include "binary_trees.h"

/**
* binary_tree_height - that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	while (binary_tree_height(tree->left) != 0 ||
			binary_tree_height(tree->right) != 0)
		height++;
	return (height);
}
