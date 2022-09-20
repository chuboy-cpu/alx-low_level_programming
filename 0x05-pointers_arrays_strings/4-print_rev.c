#include "main.h"

/**
 * print_rev - function
 * @n: pionter
 */

void print_rev(char *n)
{
int i, j;
j = _strlen(n);
for (i = (j-1); i >= 0; --i)
{
_putchar(*(n + i));
}
_putchar('\n');
}

/**
 * _strlen - function
 * @n: pionter
 * Return: j
 */

int _strlen(char *n)
{
int i, j;
j = 0;
for (i = 0; *(n + i) != '\0'; ++i)
{
++j;
}
return (j);
}
