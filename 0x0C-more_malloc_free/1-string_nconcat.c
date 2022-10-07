#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - creates an array of chars,
 * and initializes it with a specific char
 * @n: char to initialize array
 * @s2: chara 
 * @s1: chara
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
int x, y, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = malloc(strlen(s1) + n + 1);
if (p == NULL)
{
exit(98);
}
for (x = 0; x < strlen(s1); ++x)
{
*(p + x) = *(s1 + x);
}
i = 0;
for (y = x; i < n; ++y)
{
*(p + y) = *(s2 + i);
++i;
}
*(p + y) = '\0';
return (p);
}
