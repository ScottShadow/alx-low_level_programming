#include "lists.h"
/**
 * get_nodeint_at_index -  gets the nth node of a listint_t linked list.
 * @head: the address of the header node
 * @index: the index of the node we are looking for
 * Return: the address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; (i < index) && (p != NULL) && (index > 0); i++, p = p->next)
		;
	if (p == NULL)
		return (NULL);
	return (p);
}
