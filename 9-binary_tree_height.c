#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a btree
* @tree: pointer to the root node
*
* Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count1 = 0, count2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count1 = binary_tree_height(tree->left) + 1;
	if (tree->right)
		count2 = binary_tree_height(tree->right) + 1;

	return ((count1 < count2) ? count2 : count1);
}
