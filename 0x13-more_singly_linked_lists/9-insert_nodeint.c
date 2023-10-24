#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *temp;
	listint_t *newnode;
	unsigned int i = 0;

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
