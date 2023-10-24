#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: pointer to head
 * Return: the size of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0;
	const listint_t *fast, *slow;

	fast = head->next;
	slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (n);
		}
		n++;
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		n++;
	}
	return (n);
}
