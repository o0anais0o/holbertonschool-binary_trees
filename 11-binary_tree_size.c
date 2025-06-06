#include "binary_trees.h"

/**
 * binary_tree_size - function measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL) /* Base case: If tree is NULL, return 0 (no nodes) */
		return (0);
    /*Recursive case: Size = left subtree + 1 (current node) + right subtree*/
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
