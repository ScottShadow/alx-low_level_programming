#include "lists.h"
/**
 * pop_listint - frees the header of the list
 * @head: address for the head node
 * Return: value contained in the removed head node
 */
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int n = (*head)->n;

	if (*head == NULL)
		return (0);

	(*head) = (*head)->next;
	free(p);
	return (n);
}
