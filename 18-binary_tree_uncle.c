#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node in a binary tree.
* @node: Pointer to the node to find the uncle.
*
* Return: Pointer to the uncle node, or NULL if no uncle exists,
*         or if node or its parent is NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Find the sibling of the parent (uncle) */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
