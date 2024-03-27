#include "binary_trees.h"

/**
 * binaryTreeIsLeaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binaryTreeIsLeaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
