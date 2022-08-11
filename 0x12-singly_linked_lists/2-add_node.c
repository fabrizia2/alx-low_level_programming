#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer to new address of new node
 * @str: string
 *
 * Return: address of new element, NULL on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newadd;

	new = malloc(sizeof(*newadd));
	if (newadd == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		newadd = *head;
		newadd->str = strdup(str);
		newadd->len = strlen(str);
		newadd->next = NULL;
		return (newadd);
	}

	newadd->str = strdup(str);
	newadd->len = strlen(str);
	newadd->next = *head;
	return (newadd);
}
