#include "binary_trees.h"

/**
* binary_tree_is_leaf - Function checking if a node is a leaf
* @node: Pointer to the node to check
*
* Return: 1 if the node is a left, overwise 0. If node is NULL, return 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL) /*Check if node is NULL*/
	return (0);

	if (node->left == NULL && node->right == NULL)
	return (1);

	return (0);
}
