#include "main.h"

/**
 * _strlen - function
 * @n: pionter
 * Return: j
 */

int _strlen(char *n)
{
int i, j;
j = 0;
for (i = 0; *(n + i) != '\0'; ++i)
{
++j;
}
return (j);
}
