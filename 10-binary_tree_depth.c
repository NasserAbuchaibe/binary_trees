#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a binary tree or Null If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont;

	if (tree == NULL)
		return (0);
	for (cont = 0; tree->parent; cont++)
	{
		tree = tree->parent;
	}
	return (cont);
}
