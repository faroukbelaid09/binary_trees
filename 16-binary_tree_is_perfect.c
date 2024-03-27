#include "binary_trees.h"

unsigned char isLeaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *getLeaf(const binary_tree_t *tree);
int isPerfectRecursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binaryTreeIsPerfect(const binary_tree_t *tree);

/**
 * isLeaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */
unsigned char isLeaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given
 *         node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * getLeaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *getLeaf(const binary_tree_t *tree)
{
	if (isLeaf(tree) == 1)
		return (tree);
	return (tree->left ? getLeaf(tree->left) : getLeaf(tree->right));
}

/**
 * isPerfectRecursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int isPerfectRecursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (isLeaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (isPerfectRecursive(tree->left, leaf_depth, level + 1) &&
		isPerfectRecursive(tree->right, leaf_depth, level + 1));
}

/**
 * binaryTreeIsPerfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binaryTreeIsPerfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isPerfectRecursive(tree, depth(getLeaf(tree)), 0));
}
