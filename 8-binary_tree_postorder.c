#include "binary_trees.h"

/**
 * binaryTreePostorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binaryTreePostorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binaryTreePostorder(tree->left, func);
		binaryTreePostorder(tree->right, func);
		func(tree->n);
	}
}
