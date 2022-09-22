#include "main.h"

/**
 * _strncpy - function
 * @dest: pionter
 * @src: pionter
 * Return: j
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = 0;
++x;
}
return (dest);
}
