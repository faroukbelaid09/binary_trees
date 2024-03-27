#include "binary_trees.h"

/**
 * binaryTreeNodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binaryTreeNodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binaryTreeNodes(tree->left);
		nodes += binaryTreeNodes(tree->right);
	}
	return (nodes);
}
