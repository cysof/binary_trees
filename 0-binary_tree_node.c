#include "binary_trees.h"
/**
 * binary_tree_node - this create a binary tree
 * @parent: this point to the parent node
 * @value: this holds th value in the node
 *
 * Return: this return NULL on failure or a pointer of new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);/* Allocation failure */
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
