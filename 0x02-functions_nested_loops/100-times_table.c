#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++i)
{
if (n > 15 || n < 0)
{
_putchar('0');
}
else
{
_putchar((i * j));
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
}
