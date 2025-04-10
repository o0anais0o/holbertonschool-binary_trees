#include "binary_trees.h"

/**
* height - Helper function to compute the height of a binary tree.
* @tree: Pointer to the node to measure the height.
*
* Return: The height of the tree. If tree is NULL, return 0.
*/
int height(const binary_tree_t *tree)
{
	if (tree == NULL) /* Base case: If tree is NULL, return 0 */
		return (0);
    /* Recursively calculate the height of left and right subtrees */
	return (1 + ((height(tree->left) > height(tree->right)) ?
		height(tree->left) : height(tree->right)));
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: The balance factor (difference between left and..
* ..right subtree heights).
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL) /* Base case: If tree is NULL, return 0 */
		return (0);
    /* Calculate balance factor as height difference */
	return (height(tree->left) - height(tree->right));
}
