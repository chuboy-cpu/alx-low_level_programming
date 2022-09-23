#include "main.h"

/**
 * rot13 - encodes a string into 1337
 * @str: string to be processed
 * Return: string
 */

char *rot13(char *str)
{
int x, y;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (y = 0; input[y] != '\0'; ++y)
{
for (x = 0; str[x] != '\0'; ++x)
{
if (((str[x] >= 'a' && str[x] <= 'z') || (str[x] >= 'A' && str[x] <= 'Z'))
&& str[x] == input[y])
{
str[x] = output[y];
}
}
}
return (str);
}
