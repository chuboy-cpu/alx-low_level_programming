#include "lists.h"

/**
 * get_nodeint_at_index - add nodes to the begining of a list
 *
 * @head: head
 * @n: element
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *hold;
size_t i;
i = 0;
if (head == NULL)
{
return (NULL);
}
else
{
while (index >= i)
{
hold = head->next;
head = hold;
++i;
}
}
return (head);
}
