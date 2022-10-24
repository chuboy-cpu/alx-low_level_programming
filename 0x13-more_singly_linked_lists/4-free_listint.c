#include "lists.h"

/**
 * free_listint -frees a list
 *
 * @head: head
 *
 */
void free_listint(listint_t *head)
{
listint_t *hold;
while (head)
{
hold = head->next;
free(head);
head = hold;
}
}
