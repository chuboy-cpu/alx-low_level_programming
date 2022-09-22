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
char *cap;
for (i = 0; n[i] != '\0'; ++i)
{
*(cap + i) = n[i] - 32;
}
printf("%s", cap);
return (cap);
}
