#include "main.h"

/**
 * memset - function
 * @s: pionter
 * @b: pionter
 * @n: integer
 * Return: value
 */

char *memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; ++i)
{
*(s + i) = b;
}
return (s);
}
