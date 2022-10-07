#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of chars,
 * and initializes it with a specific char
 * @min: char to initialize array
 * @max: integer
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
int *array_range(int min, int max)
{
int *p;
if (min > max)
{
return (NULL);
}
int i;
i = min;
while (i != max)
{
++i;
}
p = (int *)malloc(sizeof(int) * i);
if (p == NULL)
{
return (NULL);
}
i = 0;
while (min <= max)
{
*(p + i) = min;
++i;
++min;
}
return (p);
}
