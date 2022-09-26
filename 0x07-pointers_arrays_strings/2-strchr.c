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
int i;
for (i = 0; *(s + i) != '\0'; ++i)
{
if (*(s + i) == c)
{
return (&s[i]);
}
}
return (NULL);
}
