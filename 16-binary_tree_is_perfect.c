#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the greater height + 1 for the current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If it's a leaf node, it's perfect */
	if (!tree->left && !tree->right)
		return (1);

	/* If it's an internal node, it must have two children */
	if (!tree->left || !tree->right)
		return (0);

	/* Recursively check left and right subtrees and compare heights */
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			binary_tree_height(tree->left) == binary_tree_height(tree->right));
}
