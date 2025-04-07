#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - A fonction that create a new node in binary tree
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t)); /*Memory allocation for a new node*/
	if (new_node == NULL) /*Check if the allocation was successful*/
		return (NULL); /*Error handling if malloc returns NULL*/

	new_node->n = value; /*Assigns value to the node's data field*/
	new_node->parent = parent; /*Set the parent of the node*/
	new_node->left = NULL; /*Initializes left pointers to NULL (no children)*/
	new_node->right = NULL; /*Initializes right pointers to NULL (no children)*/

	return (new_node); /*Returns the pointer to the created node on success*/
}
