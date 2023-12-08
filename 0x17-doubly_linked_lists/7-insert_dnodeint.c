#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: address of header node
 * @idx: index at which we want to enter our elemnt into
 * @n: the value of the element to insert
 * Return: address of the newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
									 unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *newnode;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		if (*head)
			(*head)->prev = newnode;
		*head = newnode;
		return (newnode);
	}
	current = *head;

	for (i = 0; current && (i < (idx - 1)) && (idx > 0); i++)
		current = current->next;
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	newnode->prev = current;
	current->next = newnode;

	if (newnode->next)
		newnode->next->prev = newnode;

	return (newnode);
}
