#include "list.h"


/**
 * print_list - singly linked list
 * @h: string - (malloc'ed string)
 * Return: no of nodes
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
++i;
}
return (i);
}
