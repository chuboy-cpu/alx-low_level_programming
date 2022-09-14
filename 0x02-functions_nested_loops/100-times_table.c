#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{
int i, j;
if (n > 15 || n < 0)
{
}
else
{
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++j)
{
int mul;
mul = i * j;
_putchar('0' + mul);
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
