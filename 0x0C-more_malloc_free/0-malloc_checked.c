#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - creates an array of chars,
 * and initializes it with a specific char
 * @b: char to initialize array
 *
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
