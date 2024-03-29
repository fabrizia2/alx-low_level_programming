#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
