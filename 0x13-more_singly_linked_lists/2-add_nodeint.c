#include "lists.h"

/**
 * listint_t - add nodes to the begining of a list
 *
 * @h: head
 * @n: element
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
