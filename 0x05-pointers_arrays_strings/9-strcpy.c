#include "main.h"

/**
 * _strcpy - function
 * @n: pionter
 * @o: pionter
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (&dest[0]);
}
 