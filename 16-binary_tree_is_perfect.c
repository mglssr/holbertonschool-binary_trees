#include "binary_trees.h"

/**
* binary_tree_height - that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (-1);
	if (tree->left)
		height_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_right = binary_tree_height(tree->right) + 1;
	return (height_left > height_right ? height_left : height_right);
}

#include "binary_trees.h"

/**
* binary_tree_is_full - a function that checks if a binary tree is full
* @tree: is a pointer to the root node of the tree to check
* Return: if tree is NULL return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

#include "binary_trees.h"

/**
* binary_tree_is_perfect - a function that checks if a binary tree is perfect
* @tree: is a pointer to the root node of the tree to check
* Return: if tree is NULL return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree || !binary_tree_is_full(tree))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left == height_right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
