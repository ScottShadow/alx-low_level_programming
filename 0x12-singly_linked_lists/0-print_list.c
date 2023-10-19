#include "lists.h"
/**
 * print_list - Prints a singly linked list
 * @h: the address of the head of the list
 * Return: The number of items in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp = h;
	unsigned int length;
	char *string;

	while (temp != NULL)
	{
		string = temp->str;
		length = temp->len;
		if (string == NULL)
		{
			string = "(nil)";
			length = 0;
		}
		printf("[%d] %s\n", length, string);
		count++;
		temp = temp->next;
	}
	return (count);
}
