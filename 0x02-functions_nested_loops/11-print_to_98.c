#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - adds two integers together
 * Return: void
 */

void print_to_98(int n)
{
while (n != 98)
{
printf("%d", n);
if (n > 98)
{
--n;
}
else if (n < 98)
{
++n;
}
printf(", ");
++n;
}
printf("%d", 98);
printf("\n");
}
