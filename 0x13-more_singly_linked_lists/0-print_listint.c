#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int list = 0;

	while (h)
	{
		printf("[%u] ", h->len);

		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");

		h = h->next;
		list++;
	}
	return (list);
}
