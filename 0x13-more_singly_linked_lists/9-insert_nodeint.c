#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address of header node
 * @idx: index at which we want to enter our elemnt into
 * @n: the value of the element to insert
 * Return: address of the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *newnode;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || *head == NULL)
		return (NULL);
	newnode->n = n;

	p = *head;

	for (i = 0; (p != NULL) && (i < (idx - 1)) && (idx > 0); i++)
		p = p->next;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (p == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->next = p->next;
		p->next = newnode;
		if (idx == 0)
			free(p);
	}

	return (newnode);
}
