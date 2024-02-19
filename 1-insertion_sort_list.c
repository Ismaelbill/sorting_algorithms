#include "sort.h"

size_t list_len(const listint_t *h);

/***/

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *previousPtr, *tmp;

	if (list_len(*list) < 2)
		return;
	ptr = ((*list)->next);
	while (ptr)
	{
		previousPtr = ptr->prev;
		tmp = *list;
		while (tmp && previousPtr->n > ptr->n)
		{
			
			tmp = tmp->next;
		}
		printf("%d\n", tmp->n);
		ptr = ptr->next;
	}

}




























/**
 * list_len - function that returns the number of elements
 * in a linked 'listint_t' list
 * @h: head of the list
 * Return: returns number of elements
 */

size_t list_len(const listint_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
