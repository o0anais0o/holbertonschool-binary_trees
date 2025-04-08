#include "binary_trees.h"
/**
* binary_tree_delete - Function that completely deletes a binary tree
* @tree: pointer to the root node of the tree to delete
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) /*Check if the tree is NULL*/
	return; /*If tree is NULL, exit the function*/

	/*Recursively call the delete function*/
	binary_tree_delete(tree->left); /*Delete the left child*/
	binary_tree_delete(tree->right); /*Delete the right child*/

	free(tree); /*Free the memory of the current node*/
}
