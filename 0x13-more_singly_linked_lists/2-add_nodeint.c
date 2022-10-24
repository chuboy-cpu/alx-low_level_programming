#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 *
 * @h: head
 *
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
