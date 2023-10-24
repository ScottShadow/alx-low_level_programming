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
	listint_t *temp;
	listint_t *newnode;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*head == NULL && idx == 0)
	{
		*head = newnode;
	}
	else
	{
		p = *head;

		for (i = 0; (p != NULL) && (i < (idx - 1)) && (idx > 0); i++)
			p = p->next;
		if (p == NULL)
			return (NULL);
		if (idx == 0)
		{
			*head = newnode;
			newnode->next = p->next;
		}
		temp = p->next;
		p->next = newnode;
		newnode->next = temp;
	}

	return (newnode);
}
