#include "main.h"

/**
 * _strlen_recursion - function
 * @s: pionter
 * Return: int
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_strlen_recursion((s + 1));
}
return (s + 1);
}
