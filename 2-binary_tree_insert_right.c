#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: a pointer to the created node, NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t)); /*Memory allocation for a new node*/

	if (new_node == NULL) /*Check if the allocation was successful*/
		return (NULL); /*Error handling if malloc returns NULL*/

	new_node->n = value; /*Assign value to the node's data field.*/
	new_node->parent = parent; /*Define the node's parent*/
	new_node->left = NULL; /*Initializes left pointers to NULL (no children)*/
	new_node->right = NULL; /*Initializes right pointers to NULL (no children)*/

	if (parent->right == NULL)
	{
		parent->right = new_node; /*Returns the pointer to the node if successful*/
		new_node->right = NULL; /*Returns NULL if the allocation fails*/
	}

	return (new_node); /*Returns ne_node*/
}
