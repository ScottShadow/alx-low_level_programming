#include "lists.h"
/**
 * reverse_listint - reverses the list elements
 * @head: the address to the header node
 * Return: the header of the new inverted list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	prev = NULL;
	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		current->next = prev;

		prev = current;
		current = *head;
	}
	*head = prev;
	return (prev);
}
