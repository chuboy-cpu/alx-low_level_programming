#include "lists.h"

/**
 * pop_listint -frees a list
 *
 * @head: head
 * Return: head nodes data(n)
 */
int pop_listint(listint_t **head)
{
listint_t *hold;
if (*head == NULL)
{
return (0);
}
hold->n = (*head)->n; 
free(*head);
return (hold->n);
}
