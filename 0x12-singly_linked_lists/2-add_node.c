#include "lists.h"

/**
 * list_len - retur the number of  elements in a list
 *
 * @h: head
 *
 * Return: number of nodes
 *
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->next = *head;
*head = new;
return (new);
}
