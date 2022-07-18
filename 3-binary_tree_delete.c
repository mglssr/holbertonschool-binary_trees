#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - function that deletes an entire binary tree
* @tree: binary tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
        binary_tree_t *node;

        if (tree == NULL)
                return;
	else
	{
        	node = tree;
        	free(tree);
        	binary_tree_delete(node->left);
        	binary_tree_delete(node->right);
	}
}
