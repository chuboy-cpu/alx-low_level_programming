#include <stdio.h>

/**
 * main - Entry piont
 * @long: chara
 * @long: chara
 * @long: chara
 * Return: void
 */
int fibonacci(unsigned long, unsigned long, unsigned long);

int main(void)
{
fibonacci(0, 1, 96);
return (0);
}

/**
 * fibonacci - returns fibanocci series
 * @f: chra
 * @b: chara
 * @n: chara
 * Return: int
 */

int fibonacci(unsigned long f,  unsigned long b, unsigned long n)
{
unsigned long sum, i;
i = 0;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%lu, ", sum);
f = b;
b = sum;
++i;
}
printf("\n");
return (0);
}
