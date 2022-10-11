#include "main.h"

/**
 * _strncpy - function
 * @dest: pionter
 * @src: pionter
 * @n: integer
 * Return: j
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = 0;
++i;
}
return (dest);
}


#include "main.h"

/**
 * _strncpy - copies as string
 * @n: number of bytes
 * @dest: string copied
 * @src: string copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest);
}
