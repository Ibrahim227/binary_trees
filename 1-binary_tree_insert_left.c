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

	root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
	{
		return (NULL);
	}

	root->n = root;
	root->parent = parent;
	root->left = root;
	root->right = NULL;

	return (root);
}
