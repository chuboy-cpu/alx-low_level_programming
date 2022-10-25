#include "lists.h"

/**
 * sum_listint - sum all the elements of a list
 *
 * @head: head
 *
 * Return: number of nodes
 */
int sum_listint(const listint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
