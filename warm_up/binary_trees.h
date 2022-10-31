#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree - a node of a binary tree
 * @n: value stored in the node
 * @left: pointer to the node's left child
 * @right: pointer to the node's right child
 * @parent: pointer to the node's parent
 */
typedef struct binary_tree
{
	int n;
	struct binary_tree *left;
	struct binary_tree *right;
	struct binary_tree *parent;
} binary_tree_t;

int binary_tree_is_full(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
