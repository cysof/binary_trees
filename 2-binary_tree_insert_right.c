#include "binary_trees.h"
/**
 * binary_tree_insert_right - funcio to insert node to th right of a node
 * @parent: this point to the parent of the node
 * @value: this point to the value of the nodo
 * Return: this return created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL); /* Insertion failure */
	}

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
	{
		return (NULL); /* Allocation failure */
	}

	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = parent->right;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;
	return (right_node);
}
