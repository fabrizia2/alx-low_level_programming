#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: list
 * Return;
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
