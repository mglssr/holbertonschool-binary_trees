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
*binary_tree_balance - a function that measures the balance factor
*of a binary tree
*@tree: is a pointer to the root node of the tree to measure the
*balance factor
*Return: the balance or 0 it tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
