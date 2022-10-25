#include "lists.h"

/**
 * sum_listint - sum all the elements of a list
 *
 * @head: head
 *
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
