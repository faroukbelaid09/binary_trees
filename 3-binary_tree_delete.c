#include "binary_trees.h"

/**
 * binaryTreeDelete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binaryTreeDelete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binaryTreeDelete(tree->left);
		binaryTreeDelete(tree->right);
		free(tree);
	}
}
