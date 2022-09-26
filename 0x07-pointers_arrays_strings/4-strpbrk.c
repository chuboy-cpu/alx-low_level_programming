#include "main.h"
#define NULL 0
/**
 * _strpbrk - function
 * @s: pionter
 * @accept: chara
 * Return: j
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
i = 0;
while (*(s + i) != '\0')
{
for (j = 0; *(accept + j) != '\0'; ++j)
{
if (*(accept + j) == *(s + i))
{
return ((s + i));
}
}
++i;
}
return (NULL);
}
