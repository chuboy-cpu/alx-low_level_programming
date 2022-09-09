#include <stdio.h>

/**
 * main - Entry piont
 * Return: 0
 */

int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; --alpha)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
