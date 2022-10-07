#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
p = (void *)malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
return (p);
}
