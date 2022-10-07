#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: char to initialize array
 * @max: integer
 * Return: NULL if size = 0, NULL if it fails
 */
int *array_range(int min, int max)
{
int *p;
if (min > max)
{
return (NULL);
}
int i;
p = malloc(sizeof(int) * (max - min + 1));
if (!p)
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
