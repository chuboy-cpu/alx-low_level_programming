#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{
if (n > 15 || n < 0)
{}
else
{
for (int i = 0; i <= n; ++i)
{
for (int j = 0; j <= n; ++j)
{
int mul;mul = i * j;
if (mul <= 9)
{
_putchar('0' + mul);
if (j != n)
{
_putchar(',');}
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (mul < 100)
{
_putchar('0' + (mul / 10));
_putchar('0' + (mul % 10));
if (j != n)
{
_putchar(',');
}
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0' + (mul / 100));
_putchar('0' + (mul % 100) / 10);
_putchar('0' + (mul % 100) % 10);
if (j != n)
{
_putchar(',');
}
_putchar(' ');
}
}
_putchar('\n');
}
}
}
