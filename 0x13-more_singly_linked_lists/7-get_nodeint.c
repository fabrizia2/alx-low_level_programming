#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 * Author: Renish
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		node++;
	}
	return (head);
}
