#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a child to left
* @parent: parent node
* @value: integer
* Return: apointer to created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);

	if (root == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		root->left = parent->left;
		parent->left->parent = root;
	}
	parent->left = root;

	return (root);
}
