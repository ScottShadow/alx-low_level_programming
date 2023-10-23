#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head)
	{
		p = *head;
		while (*head != NULL)
		{
			p = *head;
			*head = (*head)->next;
			free(p);
		}
		*head = NULL;
	}
}
