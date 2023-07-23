#include "sort.h"

/**
* insertion_sort_list - Sorts list by insertion
* @list: Head of linked list
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *p;
	listint_t *temp;

	for (p = *list; p!= NULL; p= p->next)
	{
		while (p->next != NULL && (p->n > p->next->n))
		{
			temp = p->next;
			p->next = temp->next;
			temp->prev = p->prev;

			if (p->prev)
				p->prev->next = temp;

			if (temp->next)
				temp->next->prev = p;

			p->prev = temp;
			temp->next = p;

			if (temp->prev)
				p = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
	}
}


