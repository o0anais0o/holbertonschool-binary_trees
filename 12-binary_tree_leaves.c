#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree...
 * ...to count the number of leaves.
 * Return: number of leaves in tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL) /* Base case: If tree is NULL, return 0 (no nodes) */
		return (0);

	return
	(binary_tree_leaves(tree->left) +
	(tree->left == NULL && tree->right == NULL ? 1 : 0) +
	binary_tree_leaves(tree->right));
}
