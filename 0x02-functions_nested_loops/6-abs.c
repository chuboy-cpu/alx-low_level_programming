#include "main.h"

/**
 * _abs - checks if a value is absolute or not
 * Return: 0
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (n * -1);
}
else
{
return (0);
}
}
