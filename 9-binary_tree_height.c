#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a binary tree or Null If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt, rh;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lt = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lt >= rh)
		return (1 + lt);
	return (1 + rh);
}
