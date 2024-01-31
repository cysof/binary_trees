#include "binary_trees.h"
/**
 * binary_tree_leaves - A Founction that counts the leaves in a binary tree
 * @tree: this point to the tree which the leaves will be ounted
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        return (1); /* node is a leaf*/
    }

    left = binary_tree_leaves(tree->left);
    right = binary_tree_leaves(tree->right);

    return (left + right);
}