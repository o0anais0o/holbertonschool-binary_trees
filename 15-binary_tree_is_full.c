#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full.
* @tree: is a pointer to the root node of the tree to check.
* Return: 1 if the tree is full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL) /* Base case: If tree is NULL, return 0 */
	return (0);

	/* If current node is a leaf (no children), it's full by definition */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* If current node has exactly one child, the tree isn't full */
	if (tree->left == NULL || tree->right == NULL)
	return (0);

	/* Recursively check left and right subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
