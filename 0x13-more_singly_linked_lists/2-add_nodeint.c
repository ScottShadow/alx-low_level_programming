#include "lists.h"
/**
 * add_nodeint - add a new node at the beggining of the list
 * @head: pointer to the beginning of the list
 * @n: the number to initialize
 * Return: address of newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
