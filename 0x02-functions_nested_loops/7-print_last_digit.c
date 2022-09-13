#include "main.h"

/**
 * print_last_digit - checks if a value is absolute or not
 * Return: 0
 */

int print_last_digit(int n)
{
if (n % 10 == 0)
{
return (0);
}
else
{
return (n % 10);
}
}
