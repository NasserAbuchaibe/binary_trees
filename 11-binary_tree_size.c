#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a binary tree or Null If tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt = 0, rh = 0;

	if (tree == NULL)
		return (0);
	lt = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);
	return (lt + rh + 1);
}
