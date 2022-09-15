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
result = (i x 10);
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
_putchar('\n');
}
