#include "binary_trees.h"
/**
 * binary_tree_is_full - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a binary tree or Null If tree is NULL
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lh = binary_tree_is_full(tree->left);
	rh = binary_tree_is_full(tree->right);
	if (lh == 0 || rh == 0)
		return (0);
	return (1);
}
