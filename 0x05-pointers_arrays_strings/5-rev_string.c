#include "main.h"

/**
 * rev_string - function
 * @n: pionter
 */

void rev_string(char *n)
{
int i, j, k;
char *hold = " ";
j = _strlen(n);
/*saving th first half of the string in hold*/
for (i = 0; i <= ((j - 1) / 2); ++i)
{
*(hold + i) = *(n + i);
}
/*putting the second half into the first half*/
k = 0;
for (i = (j - 1); i >= ((j - 1) / 2); --i)
{
while (k < i)
{
*(n + k) = *(n + i);
++k;
break;
}
}
/*putting the saved half from hold into the second*/
k = 0;
for (i = (j - 1); i >= ((j - 1) / 2); --i)
{
while (k < i)
{
*(n + i) = *(hold + k);
++k;
break;
}
}
_putchar('\n');
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
