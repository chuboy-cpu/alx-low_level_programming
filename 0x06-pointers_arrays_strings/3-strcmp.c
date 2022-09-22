#include "main.h"

/**
 * _strcmp - function
 * @s1: pionter
 * @s2: pionter
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
if (s1 != s2)
{
if (s2 > s1)
{
return (s2 - s1);
}
else
{
return (s1 - s2);
}
}
return (0);
}
