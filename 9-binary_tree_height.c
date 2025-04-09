#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree.
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: Height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base case: empty tree or node with no children */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0); /*Returns 0 if tree is NULL or if it's a leaf*/

	/* Recursively calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/*The height of the current node is 1 + the max height of the subtrees*/
	return (1 + (left_height > right_height ? left_height : right_height));
}
