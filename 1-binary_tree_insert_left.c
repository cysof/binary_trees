#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node to left
 * @parent: pointer to the parent
 * @value: point to the value
 * Return: A pointer to new node or Null ON failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL); /*insertion error if parent is NULL */
	}
	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return (NULL); /* Allocation error*/
	}
	left_node->parent = parent;
	left_node->n = value;
	left_node->left = parent->left;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);

}
