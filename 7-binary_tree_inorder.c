#include "binary_trees.h"

/**
 * binaryTreeInorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binaryTreeInorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binaryTreeInorder(tree->left, func);
		func(tree->n);
		binaryTreeInorder(tree->right, func);
	}
}
