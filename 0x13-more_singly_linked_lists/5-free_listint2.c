#include "lists.h"
#include "shell.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head node
 */
void free_listint2(env_t **head)
{
	env_t *p;

	if (!head)
		return;
	p = *head;
	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p->str);
		free(p);
	}
}
