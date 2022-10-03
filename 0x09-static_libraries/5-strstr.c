#include "main.h"
#define NULL 0

/**
 * _strstr - function
 * @haystack: pionter
 * @needle: chara
 * Return: j
 */

char *_strstr(char *haystack, char *needle)
{
int x, y;

x = y = 0;
while (haystack[x])
{
while (needle[y])
{
if (haystack[x + y] != needle[y])
{
break;
}
++y;
}
if (needle[y] == '\0')
{
return (haystack + x);
}
y = 0;
++x;
}
return (NULL);
}
