#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the header node
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *p, *slow, *fast;
	int n = 0;

	if (!h || !(*h))
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != (NULL) && fast->next != (NULL))
	{
		p = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(p);

		n++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			*h = (NULL);
			return (n);
		}
	}

	while (slow != (NULL))
	{
		p = slow;
		slow = slow->next;
		free(p);
		n++;
	}

	*h = (NULL);
	return (n);
}
