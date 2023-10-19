#include "lists.h"
/**
 * free_list - frees a singly list
 * @head: the address of the first member of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
