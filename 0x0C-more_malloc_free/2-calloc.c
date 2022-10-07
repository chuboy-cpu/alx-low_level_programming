#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - creates an array of chars,
 * and initializes it with a specific char
 * @nmemb: char to initialize array
 * @size: integer
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
_memset(p, 0, nmemb * size);
return (p);
}

/**
 * _memset - fills memory
 *
 * @s: memory area
 * @n: number of bytes
 * @b: constant byte
 *
 * Return: pointer to memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
