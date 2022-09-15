#include "main.h"

/**
 * more_numbers - print 10 x numbers from 0-14
 * Return: void
 */

void more_numbers(void)
{
int i;
for (i = 0; i < 15; ++i)
{
int result;
result = (i * 10);
if (result < 9)
{
_putchar(result);
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
_putchar('\n');
}
