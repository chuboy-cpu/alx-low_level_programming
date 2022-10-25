#include "lists.h"

/**
 * pop_listint -frees a list
 *
 * @head: head
 *
 */
int pop_listint(listint_t **head)
{
listint_t *hold;
if (head == NULL)
{
return (0);
}
if (*head)
{
hold->n = (*head)->n; 
free(*head);
}
return (hold->n);
}
