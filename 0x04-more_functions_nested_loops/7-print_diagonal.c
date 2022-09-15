#include "main.h"

/**
 * print_diagonal - print 10 x numbers from 0-14
 * @n: chara
 * Return: void
 */

void print_diagonal(int n)
{
int i, j, c;
c = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; ++j)
{
i = 0;
while (i < c)
{
_putchar(' ');
++i;
}
_putchar('\\');
++c;
_putchar('\n');
}
}
}
