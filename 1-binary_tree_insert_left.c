#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node.
 * If a left child already exists, it is moved down one level, and the new node
 * is inserted first.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}

