#include "main.h"

/**
 * print_square - print 10 x numbers from 0-14
 * @size: chara
 * Return: void
 */

void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
++j;
}
_putchar('\n');
++i;
}
_putchar('\n');
}
}
