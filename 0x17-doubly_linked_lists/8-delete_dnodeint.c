#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index @index of
 * a dlistint_t linked list
 * @head: the pointer to the header node of the list
 * @index: the index with which to delete the element of
 * Return: 1(Success) else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p;
	dlistint_t *temp;

	if (!head || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = p->next;
		if (*head)
			(*head)->prev = NULL;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < (index - 1); i++)
		p = p->next;
	if (p == NULL)
		return (-1);

	if (p->prev)
		p->prev->next = p->next;
	if (p->next)
		p->next->prev = p->prev;
	free(p);
	return (-1);
}
