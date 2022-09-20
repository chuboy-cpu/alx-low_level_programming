#include "main.h"

/**
 * puts_half - function
 * @n: pionter
 */

void puts_half(char *j)
{
int i, len, n;
len = _strlen(j);
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len - 1) / 2;
}
for (i = n; i <= len; ++i)
{
_putchar(*(j + i));
}
_putchar('\n');
}

/**
 * _strlen - function
 * @n: pionter
 * Return: j
 */

int _strlen(char *n)
{
int i, j;
j = 0;
for (i = 0; *(n + i) != '\0'; ++i)
{
++j;
}
return (j);
}
