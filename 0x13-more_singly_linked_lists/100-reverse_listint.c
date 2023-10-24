#include "lists.h"
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
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address of header node
 * @idx: index at which we want to enter our elemnt into
 * @n: the value of the element to insert
 * Return: address of the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *newnode;
	unsigned int i = 0;

	if (!head || (*head == NULL && idx != 0))
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	p = *head;

	for (i = 0; (p != NULL) && (i < (idx - 1)) && (idx > 0); i++)
		p = p->next;
	if (p == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = p->next;
	p->next = newnode;

	return (newnode);
}
/**
 * delete_nodeint_at_index - deletes the node at index @index of
 * a listint_t linked list
 * @head: the pointer to the header node of the list
 * @index: the index with which to delete the element of
 * Return: 1(Success) else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;
	listint_t *temp;

	if (!head || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < (index - 1); i++)
		p = p->next;
	if (p == NULL)
		return (-1);
	if (index > 0)
	{
		temp = p->next;
		if (temp == NULL)
			return (-1);
		p->next = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
/**
 * reverse_listint - reverses the list elements
 * @head: the address to the header node
 * Return: the header of the new inverted list
 */
listint_t *reverse_listint(listint_t **head)
{
	size_t i = 0, j = 0;
	int n = 0;
	size_t count = 0;
	listint_t *p;

	i = listint_len(*head);
	j = i;
	for (count = 0; count < j; count++)
	{
		p = (*head);
		n = p->n;
		insert_nodeint_at_index(head, i--, n);
		delete_nodeint_at_index(head, 0);
	}

	return (*head);
}
