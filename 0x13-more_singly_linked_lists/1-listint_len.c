#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 *
 * @h: head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
h = h->next;
++i;
}
return (i);
}
