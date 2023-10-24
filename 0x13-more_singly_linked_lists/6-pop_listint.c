#include "lists.h"
/**
 * pop_listint - frees the header of the list
 * @head: address for the head node
 * Return: value contained in the removed head node
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n = 0;

	if (!head || *head == NULL)
	{
		return (0);
	}
	else
	{
		p = *head;
		n = (*head)->n;
		(*head) = (*head)->next;
		free(p);
	}

	return (n);
}
