#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a child to left
* @parent: parent node
* @value: integer
* Return: apointer to created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);

	if (root == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		root->right = parent->right;
		parent->right->parent = root;
	}
	parent->right = root;

	return (root);
}
