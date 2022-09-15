#include <stdio.h>

/**
 * fibonacci - returns fibonacci series
 * main - Entry piont
 * @long: w
 * @long: w
 * @long: w
 * Return: void
 */

int fibonacci(unsigned long f, unsigned long b)
{
unsigned long sum, i;
i = 0;
printf("%u, ", 1);
while (i < 49) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%lu", sum);
if (i != 48)
{
printf(", ");
}
f = b;
b = sum;
++i;
}
printf("\n");
return (0);
}
