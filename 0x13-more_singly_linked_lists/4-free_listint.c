#include "lists.h"

/**
 * add_nodeint_end - add nodes to the begining of a list
 *
 * @head: head
 * @n: element
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
