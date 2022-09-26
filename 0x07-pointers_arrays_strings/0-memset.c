#include "main.h"

/**
 * memset - function
 * @s: pionter
 * @src: pionter
 * @n: integer
 * Return: j
 */

char *memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; ++i)
{
*(s + i) = b;
}
return (&s);
}
