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

	if (!head || *head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	p = *head;

	for (i = 0; (p != NULL) && (i < (idx - 1)) && (idx > 0); i++)
		p = p->next;
	if (p == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = p->next;
	p->next = newnode;

	return (newnode);
}
