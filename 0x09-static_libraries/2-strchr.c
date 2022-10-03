#include "main.h"
#define NULL 0

/**
 * _strchr - function
 * @s: pionter
 * @c: chara
 * Return: j
 */

char *_strchr(char *s, char c)
{
int x;
x = 0;
while (s[x] != '\0' && s[x] != c)
{
++x;
}
if (s[x] == c)
{
return (&s[x]);
}
else
{
return (NULL);
}
}
