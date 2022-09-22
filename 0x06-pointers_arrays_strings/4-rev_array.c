#include "main.h"

/**
 * reverse_array - function
 * @no: pionter
 * @n: integer
 * Return: 0
 */

void reverse_array(int *no, int n)
{
int i, j;
int newarray[n];
j = 0;
for (i = n; i >= 0; --i)
{
*(newarray + j) = no[i];
++j;
}
for (i = 0; i <= n; ++i)
{
*(no + i) = newarray[i];
}
}
