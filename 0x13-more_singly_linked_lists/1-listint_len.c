#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head node
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
