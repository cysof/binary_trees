#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL); /* Return NULL on failure */

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree); /* Return the new node as the root if tree is NULL */
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			/* Return the new node if left child is NULL */
			return ((*tree)->left);
		}
		else
		{
			/* Recur on the left subtree */
			return (bst_insert(&((*tree)->left), value));
		}
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			/* Return the new node if right child is NULL */
			return ((*tree)->right);
		}
		else
		{
			/*Recur on the right subtree*/
			return (bst_insert(&((*tree)->right), value));
		}
	}
	return (NULL); /* Return NULL if value is already present in the tree */
}