#include "main.h"

/**
 * reverse_array - function
 * @no: pionter
 * @n: integer
 * Return: 0
 */

char *string_toupper(char *n)
{
int i;

for (i = 0; n[i] != '\0'; ++i)
{
*(n + i) = n[i] - 32;
}
return (n);
}
