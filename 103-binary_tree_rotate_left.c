#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *new_root;

	temp = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	if (tree->right->left != NULL)
		temp = tree->right->left;

	new_root = tree->right;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree->right->parent = NULL;
	tree->right = temp;

	if (temp != NULL)
		temp->parent = tree;
	return (new_root);
}