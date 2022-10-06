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
p = malloc(sizeof(*s1) + sizeof(*s2));
if (p == NULL)
{
exit(98);
}
for (x = 0; x < strlen(*s1); ++x)
{
*(p + x) = *(s1 + x);
}
//if (n >= strlen(*s2))
//{
//for (y = x; y < strlen(*s2); ++y)
//{
//*(p + y) = *(s2 + y);
//}
//}
//else
//{
for (y = x; y < n; ++y)
{
*(p + y) = *(s2 + y);
}
++y;
*(p + y) = '\0';
}
