#include "main.h"

/**
 * rev_string - function
 * @n: pionter
 */

void rev_string(char *n)
{
int i, j;
char hold;
j = (_strlen(n) - 1);
/*saving th first half of the string in hold*/
for (i = 0; i <= (j / 2); ++i)
{
hold = *(n + i);
*(n + i) = *(n + j - i);
*(n + j - i) = hold;
}
}

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
