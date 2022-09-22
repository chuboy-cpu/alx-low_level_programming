#include "main.h"
#include <stdio.h>

int main()
{
int j;
char s[] = "hwy";
char t[] = "hwy";
j = _strcmp(t, s);
printf("%d", j);
}

/**
 * _strcmp - function
 * @s1: pionter
 * @s2: pionter
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
if (*s1 != *s2)
{
return (s1 - s2);
}
return (0);
}
