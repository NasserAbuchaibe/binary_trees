#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder -  function that deletes an entire binary tree
 * @tree: pointer to the parent node of the node to create
 * @func: function to print
 * Return:  void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
