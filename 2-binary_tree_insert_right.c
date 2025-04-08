#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: a pointer to the created node, NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /*Check if the parent is NULL*/
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	/*Memory allocation for a new node*/
	if (new_node == NULL) /*Check if allocation failed*/
		return (NULL); /*Error handling if malloc returns NULL*/

	new_node->n = value; /*Assign value to the node's data field.*/
	new_node->parent = parent; /*Define the node's parent*/
	new_node->left = NULL; /*Initializes left pointers to NULL (no children)*/
	new_node->right = parent->right;
	/*Points to the current right child of the parent*/

    /*Handle case where parent already has a right child*/
	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;
    /*Update parent's right pointer to point to the new node*/

	return (new_node); /*Returns new_node*/
}
