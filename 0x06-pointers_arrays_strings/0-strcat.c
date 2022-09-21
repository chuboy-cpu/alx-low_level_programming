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
int i, m, n;
char *concatenat;
for (m = 0; *(dest + m) != '\0'; ++m)
{
concatenat[m] = *(dest + m);
}
i = 0;
for (n = m; *(src + i) != '\0'; ++n)
{
concatenat[n] = *(src + i);
++i;
}
return (concatenat);
}
