#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer
 *
 * Return: head nodes data(n)
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *hold;
int n;
size_t i;
i = 0;

if (*head == NULL)
{
return (-1);
}
while (i < index)
{
*head = (*head)->next;
i++;
}
hold = *head;
hold = (*head)->next;
free(*head);
*head = hold;
return (1);
}
