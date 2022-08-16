#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *melvin, *renish;

	if (head == NULL || head->next == NULL)
		return (NULL);

	melvin = head->next;
	renish = (head->next)->next;

	while (renish)
	{
		if (melvin == renish)
		{
			melvin = head;

			while (melvin != renish)
			{
				melvin = melvin->next;
				renish = renish->next;
			}

			return (melvin);
		}

		melvin = melvin->next;
		renish = (renish->next)->next;
	}

	return (NULL);
}
