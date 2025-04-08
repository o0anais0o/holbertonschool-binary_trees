#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: a pointer to the created node, NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /*Check if parent is NULL*/
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t)); /*Memory allocation for a new node*/
	if (new_node == NULL) /*Check if the allocation was successful*/
		return (NULL); /*Error handling if malloc returns NULL*/

	new_node->n = value; /*Assign value to the node's data field.*/
	new_node->parent = parent; /*Define the node's parent*/
	new_node->right = NULL; /* No right child for this new node */
	new_node->left = parent->left; /*Point to current left child of parent*/

	/*Handle case where parent already has a left child*/
	if (parent->left != NULL)
	parent->left->parent = new_node;

	/*Update parent's left pointer to point to the new node*/
	parent->left = new_node;

	return (new_node); /*Returns new_node*/
}
