#include <stdio.h>

/**
 * fibonacci - returns fibonacci series
 * main - Entry piont
 * @int: w
 * @int: w
 * @int: w
 * Return: void
 */
int fibonacci(unsigned int f, unsigned int b);

int main(void)
{
fibonacci(1, 1);
return (0);
}

int fibonacci(unsigned int f, unsigned int b)
{
unsigned int sum, i;
i = 0;
printf("%d, ", 1);
while (i < 50) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%d, ", sum);
f = b;
b = sum;
++i;
}
return (0);
}
