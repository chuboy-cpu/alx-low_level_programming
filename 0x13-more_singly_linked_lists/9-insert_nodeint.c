#include "lists.h"

/**
 * insert_nodeint_at_index - add nodes to the specified index of a list
 *
 * @head: head
 * @n: element
 * @idx: index to put the new node
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
size_t i;
i = 0;
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (*head);
}
while (i < idx)
{
*head = (*head)->next;
++i;
if (!(*head))
{
free(new_node);
return (NULL);
}
}
new_node->next = (*head)->next;
*head = new_node;
return (new_node);
}
