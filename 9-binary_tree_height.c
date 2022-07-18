#include "binary_trees.h"

/**
* binary_tree_height - that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left < height_right)
		return (height_right + 1);
	else
		return (height_left + 1);
}
