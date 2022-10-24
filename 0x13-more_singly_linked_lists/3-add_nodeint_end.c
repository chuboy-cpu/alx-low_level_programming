#include "lists.h"

/**
 * add_nodeint_end - add nodes to the begining of a list
 *
 * @head: head
 * @n: element
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *hold;
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
{
return (NULL);
}
new_node->n = n;
if (hold == NULL)
{
*head = new_node;
}
else
{
hold = *head;
while (hold != NULL)
{
hold = hold->next;
}
hold->next = new_node;
new_node->next = NULL;
}
return (new_node);
}
