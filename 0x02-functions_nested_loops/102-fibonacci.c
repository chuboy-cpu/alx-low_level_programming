#include <stdio.h>

/**
 * fibonacci - returns fibonacci series
 * main - Entry piont
 * @long: w
 * @long: w
 * @long: w
 * Return: void
 */
int fibonacci(unsigned long f, unsigned long b);

int main(void)
{
fibonacci(1, 1);
return (0);
}

int fibonacci(unsigned long f, unsigned long b)
{
unsigned long sum, i;
i = 0;
printf("%u, ", 1);
while (i < 50) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%u, ", sum);
f = b;
b = sum;
++i;
}
return (0);
}
