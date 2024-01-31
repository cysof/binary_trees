#include "binary_trees.h"
/**
 * binary_tree_postoder - goes through binary tree using post-order
 * @tree: A pointer to the root node
 * @func: A pointer to the func to call node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}