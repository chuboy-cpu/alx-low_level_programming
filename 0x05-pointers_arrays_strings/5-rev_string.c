#include "main.h"

/**
 * print_rev - function
 * @n: pionter
 */

void print_rev(char *n)
{
int i, k;
char *hold;
j = _strlen(*n);
/*saving th first half of the string in hold*/
for (i = 0; i <= (j / 2); ++i)
{
*(hold + i) = *(n + i);
}
/*putting the second half into the first half*/
k = 0;
for (i = j; i >= (j / 2); --i)
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
for (i = j; i >= (j / 2); --i)
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
