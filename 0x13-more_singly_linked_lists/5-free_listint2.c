#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *next_node;

	while (p != NULL)
	{
		next_node = p->next;
		free(p);
		p = next_node;
	}
	*head = NULL;
}
