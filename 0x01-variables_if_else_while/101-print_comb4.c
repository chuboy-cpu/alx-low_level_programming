#include <stdio.h>

/**
 * main - Entry piont
 * Return: 0
 */

int main(void)
{
int i, j, k;

for (i = 48; i <= 55; ++i)
{
for (j = i + 1; j <= 56; j++)
{
for (k = j + 1; k <= 57; k++)
{
putchar((char)i);
putchar((char)j);
putchar((char)k);
if (i != 55)
{ 
putchar(' ');
}
}

}
}
putchar('\n');
return (0);
}
