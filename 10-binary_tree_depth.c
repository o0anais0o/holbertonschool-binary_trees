#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the depth...
* ...of a node in a binary tree.
* @tree: is a pointer to the node to measure the depth.
* Return: value to return
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0; /* Variable to store the depth */

	if (tree == NULL) /* If tree is NULL, return 0 */
		return (0);

	/*Traverse up the tree until reaching the root*/
		while (tree->parent != NULL)
	{
		dep++; /* Increment depth for each parent */
		tree = tree->parent; /* Move to the parent node */
	}

	return (dep); /* Return the calculated depth */
}
