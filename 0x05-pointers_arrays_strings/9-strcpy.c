#include "main.h"

/**
 * _strcpy - function
 * @dest: pionter
 * @src: pionter
 * Return: dest
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
 