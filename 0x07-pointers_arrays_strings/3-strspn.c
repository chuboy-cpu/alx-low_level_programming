#include "main.h"

/**
 * _strspn - function
 * @s: pionter
 * @accept: chara
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, x;
i = 0;
x = 0;
while (*(s + i) != '\0')
{
for (j = 0; *(accept + j) != '\0'; ++j)
{
if (*(accept + j) == *(s + i))
{
++x;
}
}
++i;
}
return (x);
}
