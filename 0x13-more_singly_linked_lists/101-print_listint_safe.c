#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *Melvin, *Renish;
	size_t uninodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	Melvin = head->next;
	Renish = (head->next)->next;

	while (Renish)
	{
		if (Melvin == Renish)
		{
			Melvin = head;
			for (; Melvin != Renish; uninodes++)
			{
				Melvin = Melvin->next;
				Renish = Renish->next;
			}
			Melvin = Melvin->next;
			for (; Melvin != Renish; uninodes++)
			{
				Melvin = Melvin->next;
			}

			return (uninodes);
		}

		Melvin = Melvin->next;
		Renish = (Renish->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t uninodes, index = 0;

	uninodes = looped_listint_len(head);

	if (uninodes == 0)
	{
		for (; head != NULL; uninodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < uninodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (uninodes);
}
