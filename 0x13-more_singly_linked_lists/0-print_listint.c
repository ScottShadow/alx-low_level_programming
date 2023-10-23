#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
