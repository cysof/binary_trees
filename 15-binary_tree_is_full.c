#include "binary_trees.h"

/**
 * binary_tree_is_full - the func that check if binary tree is full
 * @tree: pointer to the tree
 * Return: return 1 on if the node is a leaf.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    int right, left;

    right = left = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return (1); /* if the node is a leaf*/
    }
    if (tree->left == NULL && tree->right != NULL)
    {
        return (0); /* if the node has at least one child*/
    }
    if (tree->left != NULL && tree->right == NULL)
    {
        return (0);
    }

    left = binary_tree_is_full(tree->left);
    right = binary_tree_is_full(tree->right);

    if (right == 1 && left == 1)
    {
        return(0);
    }
}