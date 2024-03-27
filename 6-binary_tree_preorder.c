#include "binary_trees.h"

/**
 * binaryTreePreorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binaryTreePreorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binaryTreePreorder(tree->left, func);
		binaryTreePreorder(tree->right, func);
	}
}
