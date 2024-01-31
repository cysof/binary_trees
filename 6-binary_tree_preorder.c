#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses through the tree using pre-order
 * @tree: Pointer to the root node of the tree
 * @func: pointer to a function to call
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return; /* do nothing if the tree or func is null*/
    }
    func(tree->n);

    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);

}