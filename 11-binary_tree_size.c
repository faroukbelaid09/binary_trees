#include "binary_trees.h"

/**
 * binaryTreeSize - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binaryTreeSize(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binaryTreeSize(tree->left);
		size += binaryTreeSize(tree->right);
	}
	return (size);
}
