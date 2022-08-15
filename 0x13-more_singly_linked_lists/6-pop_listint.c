#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node
 * @head: the head node
 * Return: the head node data
 * Author: Renish
 */

int pop_listint(listint_t **head)
{
	listint_t *Node;
	int nodeData;

	if (*head == NULL)
	{
		return (0);
	}

	Node = *head;
	*head = Node->next;
	nodeData = Node->n;

	free(Node);
	return (nodeData);

}
