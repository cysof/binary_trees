#include "binary_trees.h"
/**
 * binary_tree_size - funtion that measure the size of binary tree
 * @tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size;

    if (tree == NULL)
    {
        return (0);
    }
    size = binary_tree_size(tree->left) + 1;
    size += binary_tree_size(tree->right);

    return (size);

}