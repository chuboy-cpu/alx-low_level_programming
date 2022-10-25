#include "lists.h"

/**
 * sum_listint - sum all the elements of a list
 *
 * @h: head
 *
 * Return: number of nodes
 */
int sum_listint(const listint_t *h)
{
int sum;
sum = 0;
while (h != NULL)
{
sum += h->n;
h = h->next;
}
return (sum);
}
