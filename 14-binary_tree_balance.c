#include "binary_trees.h"

/**
 * binaryTreeBalance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binaryTreeBalance(const binary_tree_t *tree)
{
	if (tree)
		return (binaryTreeHeight(tree->left) - binaryTreeHeight(tree->right));

	return (0);
}

/**
 * binaryTreeHeight - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binaryTreeHeight(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binaryTreeHeight(tree->left) : 1;
		r = tree->right ? 1 + binaryTreeHeight(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
