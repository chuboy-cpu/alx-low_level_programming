#include "main.h"

/**
 * puts2 - function
 * @n: pionter
 */

void puts2(char *n)
{
int i;
for (i = 0; *(n + i) != '\0'; i += 2)
{
_putchar(*(n + i));
}
_putchar('\n');
}
