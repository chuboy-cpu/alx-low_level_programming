#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


size_t print_list(const list_t *h)
{
int i = 0;
while (h->next != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
++i;
}
return (i);
}
