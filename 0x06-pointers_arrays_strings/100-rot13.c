#include "main.h"

/**
 * rot13 - encodes a string into 1337
 * @str: string to be processed
 * Return: string
 */

char *rot13(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
if (str[x] >= 'a' && str[x] <= 'z')
{
str[x] = (str[x] + 12);
}
}
return (str);
}
