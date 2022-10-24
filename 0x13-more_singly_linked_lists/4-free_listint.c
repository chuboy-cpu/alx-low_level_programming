#include "lists.h"

/**
 * free_listint -frees a list
 *
 * @head: head
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
listint_t *hold = head;
while (hold->next)
{
hold = hold->next;
free(hold);
}
}
