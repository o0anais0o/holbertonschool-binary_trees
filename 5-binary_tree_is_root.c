#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, overwise 0. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL) /*Check if node is NULL*/
	return (0);

	if (node->left == NULL && node->right == NULL)
	return (1);

    if (node->left != NULL && node->right != NULL)
	return (0);
}
