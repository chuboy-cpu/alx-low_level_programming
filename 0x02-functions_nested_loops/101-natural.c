#include <stdio.h>

/**
 * main - adds two integers together
 * Return: void
 */

int main(void)
{
int sum, n;
n = 0;
while (n < 1024)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
++n;
}
printf("%d", sum);
printf("\n");
return (0);
}
