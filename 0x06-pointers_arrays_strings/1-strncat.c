#include "main.h"

/**
 * _strncat - function
 * @dest: pionter
 * @src: pionter
 * @n: integer
 * Return: j
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j <= n)
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
