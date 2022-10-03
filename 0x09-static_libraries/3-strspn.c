#include "main.h"

/**
 * _strspn - function
 * @s: pionter
 * @accept: chara
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
int x, y;
int m;
for (x = 0; *(s + x) != '\0'; x++)
{
m = 0;
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + x) == *(accept + y))
{
m = 1;
break;
}
}
if (!m)
{
return (x);
}
}
return (0);
}
