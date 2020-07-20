#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete -  function that deletes an entire binary tree
 * @tree: pointer to the parent node of the node to create
 * Return:  void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
