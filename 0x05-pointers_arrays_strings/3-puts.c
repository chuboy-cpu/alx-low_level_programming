#include "main.h"

/**
 * _puts - function
 * @n: pionter
 */

void _puts(char *n)
{
int i;
for (i = 0; *(n + i) != '\0'; ++i)
{
_putchar(*(n + i));
}
_putchar('\n')
}
