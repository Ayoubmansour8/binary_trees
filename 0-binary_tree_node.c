#include "binary_trees.h"
#include <stdlib.h>

/**
 * create_binary_tree_node - Allocates memory and initializes a new binary tree node.
 * @parent_node: Pointer to the parent node.
 * @node_value: The integer value to store in the new node.
 * Return: Pointer to the newly created node, or NULL if memory allocation fails.
 */
binary_tree_t *create_binary_tree_node(binary_tree_t *parent_node, int node_value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node with the provided value and parent pointer */
    new_node->n = node_value;
    new_node->parent = parent_node;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

