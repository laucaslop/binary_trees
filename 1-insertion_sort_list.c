#include "sort.h"

/**
* insertion_sort_list - insertion_sort_list
* @list: list
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (list == NULL || *list == NULL)
		return;

	currnt = (*list)->next;

	while (currnt != NULL)
	{
		while (currnt->prev != NULL && currnt->n < currnt->prev->n)
		{
			currnt->prev->next = currnt->next;
			if (currnt->next != NULL)
				currnt->next->prev = currnt->prev;
			currnt->next = currnt->prev;
			currnt->prev = currnt->prev->prev;
			currnt->next->prev = currnt;
			if (!currnt->prev)
				*list = currnt;
			else
				currnt->prev->next = currnt;
			print_list(*list);
		}
		currnt = currnt->next;
	}
}
