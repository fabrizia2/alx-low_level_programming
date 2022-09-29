#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to start of list
 * @index: index of the node, starting from 0
 *
 * Return: value of the node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int nth = 0;

	tmp = head;
	while (tmp)
	{
		if (nth == index)
			return (tmp);
		nth++;
		tmp = tmp->next;
	}
	return (NULL);
}
