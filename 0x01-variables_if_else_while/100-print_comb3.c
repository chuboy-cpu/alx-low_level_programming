#include <stdio.h>

/**
 * main - Entry piont
 * Return: 0
 */

int main(void)
{
int i, j;

for (i = 48; i <= 56; ++i)
{
for (j = i + 1; j <= 57; j++)
{
putchar((char)i);
putchar((char)j);
if (i != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
