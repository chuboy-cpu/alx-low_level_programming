#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
int i,j;
for (i = 0; i < 24; ++i)
{
if (i < 10)
{
_putchar('0');
}
_putchar(i);
for (j = 0; j < 60; ++i)
{
_putchar(':');
if (i < 10)
{
_putchar('0');
}
_putchar(i);
_putchar('\n');
}
}
}
