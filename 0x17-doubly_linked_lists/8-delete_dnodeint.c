#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index @index of
 * a dlistint_t linked list
 * @head: the pointer to the header node of the list
 * @index: the index with which to delete the element of
 * Return: 1(Success) else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempPointer1;
	dlistint_t *tempPointer2;
	unsigned int i;

	tempPointer1 = *head;

	if (tempPointer1 != NULL)
		while (tempPointer1->prev != NULL)
			tempPointer1 = tempPointer1->prev;

	i = 0;

	while (tempPointer1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tempPointer1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tempPointer2->next = tempPointer1->next;

				if (tempPointer1->next != NULL)
					tempPointer1->next->prev = tempPointer2;
			}

			free(tempPointer1);
			return (1);
		}
		tempPointer2 = tempPointer1;
		tempPointer1 = tempPointer1->next;
		i++;
	}

	return (-1);
}
