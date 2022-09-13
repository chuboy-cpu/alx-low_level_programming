#include "main.h"

/**
 * print_times_table - prints the n times table
 * Return: void
 */

void print_times_table(int n)
{
int i,j;
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++i)
{
_putchar(i *j);
_putchar(', ');
}
_putchar('\n');
}
}
