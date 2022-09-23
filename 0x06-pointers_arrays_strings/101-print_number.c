#include "main.h"

/**
 * print_number - print numbers
 * @n: int
 * Return: void
 */

void print_number(int n)
{
if (n <= 9) 
{ 
_putchar('0' + n);
}
else if (n < 100)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
else if (n < 1000)
{
_putchar('0' + (n / 100));
_putchar('0' + (n % 100) / 10);
_putchar('0' + (n % 100) % 10);
}
else
{
_putchar('0' + (n / 1000));
_putchar('0' + (n % 1000) / 100);
_putchar('0' + ((n % 1000) % 100) / 10);
_putchar('0' + ((n % 1000) % 100) % 10);
}
}
