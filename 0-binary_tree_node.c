#include "binary_trees.h"

/**
* binary_tree_node - insert a child to left
* @parent: parent node
* @value: integer
* Return: apointer to created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
	{
		return (NULL);
	}

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
