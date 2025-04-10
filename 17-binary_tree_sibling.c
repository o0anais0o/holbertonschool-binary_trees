#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node in a binary tree.
* @node: Pointer to the node to find the sibling.
*
* Return: Pointer to the sibling node, or NULL if no sibling exists,
*         or if node or its parent is NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if the node is the left child, return the right child */
	if (node == node->parent->left)
		return (node->parent->right);

	/* If the node is the right child, return the left child */
	return (node->parent->left);
}
