#include "binary_trees.h"

/**
* binary_tree_delete - delete an entire tree
* @tree: pointer to the root node of deleted tree
* Return: nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (tree == NULL)
		return;

	root->n = tree;
	root->parent = NULL;
	root->left = NULL;
	root->right = NULL;

	return (tree);
}
