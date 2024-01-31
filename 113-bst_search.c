#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: Pointer to the root node of the BST to search
 * @value: Value to search in the tree
 *
 * Return: Pointer to the node containing a value equal to value,
 * or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL); /* Return NULL if tree is NULL */
	}

	if (value == tree->n)
	{
		/* Return the current node if it contains the value */
		return ((bst_t *)tree);
	}
	else if (value < tree->n)
	{
		return (bst_search(tree->left, value)); /* Recur on the left subtree */
	}
	else
	{
		return (bst_search(tree->right, value)); /* Recur on the right subtree */
	}
}