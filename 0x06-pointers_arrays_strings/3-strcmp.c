#include "main.h"

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
return (*s1 - *s2);
}
if (*s1 != '\0')
{
return (*s1);
}
else if (*s2 != '\0')
{
return (*s2);
}
return (0);
}
