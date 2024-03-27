#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Data structures */

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_t
{
	int n;
	struct binary_tree_t *parent;
	struct binary_tree_t *left;
	struct binary_tree_t *right;
};
typedef struct binary_tree_t binary_tree_t;

/**
 * struct levelorder_queue_s - Level order traversal queue.
 * @node: A node of a binary tree.
 * @next: The next node to traverse to in the binary tree.
 */
typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;

/* Task function prototypes */
binary_tree_t *binaryTreeNode(binary_tree_t *parent, int value);
binary_tree_t *binaryTreeInsert_left(binary_tree_t *parent, int value);
binary_tree_t *binaryTreeInsert_right(binary_tree_t *parent, int value);
void binaryTreeDelete(binary_tree_t *tree);
int binaryTreeIsLeaf(const binary_tree_t *node);
int binaryTreeIsRoot(const binary_tree_t *node);
void binaryTreePreorder(const binary_tree_t *tree, void (*func)(int));
void binaryTreeInorder(const binary_tree_t *tree, void (*func)(int));
void binaryTreePostorder(const binary_tree_t *tree, void (*func)(int));
size_t binaryTreeHeight(const binary_tree_t *tree);
size_t binaryTreeDepth(const binary_tree_t *tree);
size_t binaryTreeSize(const binary_tree_t *tree);
size_t binaryTreeLeaves(const binary_tree_t *tree);
size_t binaryTreeNodes(const binary_tree_t *tree);
int binaryTreeBalance(const binary_tree_t *tree);
int binaryTreeIsFull(const binary_tree_t *tree);
int binaryTreeIsPerfect(const binary_tree_t *tree);
binary_tree_t *binaryTreeSibling(binary_tree_t *node);
binary_tree_t *binaryTreeUncle(binary_tree_t *node);

#endif /* BINARY_TREES_H */
