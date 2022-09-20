#include "main.h"

/**
 * print_rev - function
 * @n: pionter
 */

void print_rev(char *n)
{
int i;
j = _strlen(*n);
for (i = j; i >= 0; --i)
{
_putchar(*(n + i));
}
_putchar('\n')
}
