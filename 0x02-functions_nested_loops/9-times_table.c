#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
product = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (product <= 9)
_putchar(' ');
}
if (product <= 9)
{
_putchar('0' + product);
}
else
{
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
