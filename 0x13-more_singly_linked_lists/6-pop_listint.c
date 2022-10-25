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
int i;
listint_t *hold;
if (*head == NULL)
{
return (0);
}
hold = (*head)->next;
i = (*head)->n; 
free(*head);
*head = hold;
return (i);
}
