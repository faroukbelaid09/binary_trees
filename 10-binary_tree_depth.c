#include "binary_trees.h"

/**
 * binaryTreeDepth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binaryTreeDepth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binaryTreeDepth(tree->parent) : 0);
}
