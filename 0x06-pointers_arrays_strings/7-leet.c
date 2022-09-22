#include "main.h"

/**
 * leet - function
 * @n: integer
 * Return: 0
 */

char *leet(char *n)
{
int i;
char *cap;
for (i = 0; n[i] != '\0'; ++i)
{
if (n[i] == 'a' || n[i] == 'A')
{
n[i] = '4';
}
if (n[i] == 'e' || n[i] == 'E')
{
n[i] = '3';
}
if (n[i] == 'o' || n[i] == 'O')
{
n[i] = '0';
}
if (n[i] == 't' || n[i] == 'T')
{
n[i] = '7';
}
if (n[i] == 'l' || n[i] == 'L')
{
n[i] = '1';
}
}
return (n);
}
