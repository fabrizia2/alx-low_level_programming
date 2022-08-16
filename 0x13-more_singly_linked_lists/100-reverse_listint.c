#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: The head node
 *
 * Return: Pointer to the first node of the reversed list
 * Author: Renish Okago
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *print, *nill;

	print = NULL;
	nill = NULL;

	while (*head != NULL)
	{
		nill = (*head)->next;
		(*head)->next = print;
		print = *head;
		*head = nill;
	}

	*head = print;
	return (*head);
}
