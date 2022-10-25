#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer
 *
 * Return: head nodes data(n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (*head == NULL)
		return (0);
	hold = *head;
	n = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;
	return (n);
}
