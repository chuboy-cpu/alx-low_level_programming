#include "main.h"

/**
 * print_line - print numbers from 0-9 ecept 2 and 4
 * Return: void
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n')
}
else
{
for (i = 0; i < n; ++i)
{

_putchar('_');
}
_putchar('\n');
}
}
