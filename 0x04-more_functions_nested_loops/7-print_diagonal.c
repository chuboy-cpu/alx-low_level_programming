#include "main.h"

/**
 * print_diagonal - print 10 x numbers from 0-14
 * Return: void
 */

void print_diagonal(int n)
{
int i, j, c;
c = 0;
for (j = 0; j < n; ++j)
{
i =0;
while (i < c)
{
_putchar(' ')
++i;
}
_putchar('\\');
++c;
}
}
