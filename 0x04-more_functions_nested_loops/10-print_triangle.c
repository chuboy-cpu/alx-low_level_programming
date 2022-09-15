#include "main.h"

/**
 * print_triangle - print triangle
 * @size: chara
 * Return: void
 */

void print_triangle(int size)
{
int i, j;
if (size < 1)
{
_putchar('\n');
}
else
{
c = size;
for (j = 0; j < size; ++j)
{
i = 0;
while (i < c)
{
_putchar(' ');
++i;
}
_putchar('#');
--c;
_putchar('\n');
}
}
}
