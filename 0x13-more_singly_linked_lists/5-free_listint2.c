#include "lists.h"

/**
 * free_listint2 -frees a list
 *
 * @head: head
 *
 */
void free_listint2(listint_t **head)
{
listint_t *hold;
while (head)
{
hold = (*head)->next;
free(*head);
*head = hold;
}
*head = NULL;
}
