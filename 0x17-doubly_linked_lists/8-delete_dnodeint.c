#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: head
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			if (!tmp->prev && !tmp->next)
			{
				free(tmp);
				*head = NULL;
				return (1);
			}
			if (tmp->prev == NULL && tmp->next != NULL)
			{
				tmp->next->prev = NULL;
				*head = tmp->next;
				free(tmp);
				return (1);
			}
			if (tmp->prev != NULL && tmp->next == NULL)
			{
				tmp->prev->next = NULL;
				free(tmp);
				return (1);
			}
			else
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp);
				return (1);
			}
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
