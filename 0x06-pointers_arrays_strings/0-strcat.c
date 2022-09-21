#include "main.h"

#include "main.h"

/**
 * _strcat - function
 * @dest: pionter
 * @src: pionter
 * Return: j
 */

char *_strcat(char *dest, char *src)
{
int m, n;
char *concatenat;
for (m = 0; *(dest + m) != '\0'; ++m)
{
continue;
}
for (n = 0; *(src + n) != '\0'; ++n)
{
*(dest + m) = *(src + n);
++m;
}
return (dest);
}
