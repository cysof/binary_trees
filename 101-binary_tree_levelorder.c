#include "binary_trees.h"

/**
 * binary_tree_levelorder - go through binary tree using level-order traversal
 * @tree: pointer to root of tree
 * @func: function pointer to use while traversing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, counter;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_balance_height(tree);
	for (counter = 0; counter <= height; counter++)
		levelordering(tree, func, counter);
}

/**
 * levelordering - binary tree level ordering recursive helper function
 * @tree: node of a tree, initially the root
 * @func: function pointer to use at each level
 * @height: height of tree from current node
 */

void levelordering(const binary_tree_t *tree, void (*func)(int), int height)
{
	if (tree == NULL)
		return;
	else if (height == 0)
		func(tree->n);
	else
	{
		levelordering(tree->left, func, height - 1);
		levelordering(tree->right, func, height - 1);
	}
}

/**
 * binary_tree_balance_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_balance_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_balance_height(tree->left) + 1;
	right = binary_tree_balance_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}