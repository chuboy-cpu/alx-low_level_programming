#include "lists.h"

/**
 * add_node_end - adds a new node at the beginnning of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *y = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(new->str);
if (y == NULL)
{
*head = new;
}
else
{
while (y->next)
{
y = y->next;
}
y->next = new;
new->next = NULL;
return (new);
}
}