#include "binary_trees.h"

/**
 * binary_tree_nodes - func the count node with one at least one child
 * @tree: pointr to the root of the node of the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    
    if (tree->left != NULL && tree->right != NULL)
    {
        return (1 + binary_tree_nodes(tree->left) + 
        binary_tree_nodes(tree->right));

    }
    return (0);
}