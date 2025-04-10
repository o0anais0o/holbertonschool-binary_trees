#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes...
* ...with at least 1 child in a binary tree.
* @tree: is a pointer to the root node of the tree...
* ...to count the number of nodes.
* Return: number of nodes with children.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child; /* Declare variables at the beginning */

	if (tree == NULL) /* Base case: If tree is NULL, return 0 */
	return (0);

	/* Check if the current node has at least one child */
	has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	/* Recursively count nodes with children in left and right subtrees */
	return
	(has_child + binary_tree_nodes(tree->left) +
	binary_tree_nodes(tree->right));
}
