#include "binary_trees.h"

/**
* binary_tree_inorder - Function that goes through a binary tree...
* ...using in-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /*Handling null cases*/
	return;
	{
	/*Recursive call for the left & right subtree*/
	binary_tree_inorder(tree->left, func);
	func(tree->n); /*A function of the current node that contains a value*/
	binary_tree_inorder(tree->right, func);
	}
}
