#include "main.h"

/**
 * _strlen_recursion - function
 * @s: pionter
 * Return: int
 */

int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s != '\0')
{
_strlen_recursion((s + 1));
++i;
}
return (i - 1);
}
