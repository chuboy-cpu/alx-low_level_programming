#include "main.h"

/**
 * _strcmp - function
 * @s1: pionter
 * @s2: pionter
 * Return: j
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
if (s1 != s2)
{
if (s2 > s1)
{
return (1);
}
else
{
return (-1);
}
}
return (0);
}
