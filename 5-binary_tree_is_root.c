#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given node is a root
* @node: Pointer to the node to check
*
* Return: 1 if the node is a root, overwise 0. If node is NULL, return 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL) /*Check if node is NULL*/
	return (0);

	if (node->parent == NULL)
	return (1);

	return (0);
}
