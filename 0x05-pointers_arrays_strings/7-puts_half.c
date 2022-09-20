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
n = len;
}
else
{
n = len - 1;
}
for (i = n; i > (n / 2); --i)
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
