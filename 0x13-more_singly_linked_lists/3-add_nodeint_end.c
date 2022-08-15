#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * @head: address of new node
 * @str: string
 *
 * Return: address of new element, NULL on failier
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newadd, *oldadd;
	char *node;

	node = strdup(str);
	if (str == NULL || node == NULL)
		return (NULL);

	newadd = malloc(sizeof(*newadd));
	if (newadd == NULL)
	{
		return (NULL);
	}
	newadd->str = node;
	newadd->len = strlen(str);
	newadd->next = NULL;

	if (*head == NULL)
	{
		*head = newadd;
		return (*head);
	}
	oldadd = *head;

	while (oldadd->next != NULL)
		oldadd = oldadd->next;
	oldadd->next = newadd;
	return (*head);
}
