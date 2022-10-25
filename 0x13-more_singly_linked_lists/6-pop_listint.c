#include "lists.h"

/**
 * pop_listint -frees a list
 *
 * @head: head
 * Return: head nodes data(n)
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *hold;
if (*head == NULL)
{
return (0);
}
i = (*head)->n; 
free(*head);
return (i);
}
