#include "lists.h"
/**
 * list_len - prints the number of elements in singly linked list
 * @h: the address of the head node
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
