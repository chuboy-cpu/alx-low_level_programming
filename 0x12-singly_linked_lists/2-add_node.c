#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 *
 * @head: head
 * @str: value of node 
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
