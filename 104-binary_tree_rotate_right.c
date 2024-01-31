#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *new_root;

	temp = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	if (tree->left->right != NULL)
		temp = tree->left->right;

	new_root = tree->left;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree->left->parent = NULL;
	tree->left = temp;

	if (temp != NULL)
		temp->parent = tree;
	return (new_root);
}