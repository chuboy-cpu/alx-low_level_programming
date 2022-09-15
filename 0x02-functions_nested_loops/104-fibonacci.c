#include <stdio.h>

/**
 * main - Entry piont
 * @long: chara
 * @long: chara
 * @long: chara
 * Return: void
 */
int fibonacci(unsigned long long, unsigned long long, unsigned long);

int main(void)
{
fibonacci(1, 1, 97);
return (0);
}

/**
 * fibonacci - returns fibanocci series
 * @f: chra
 * @b: chara
 * @n: chara
 * Return: int
 */

int fibonacci(unsigned long long f,  unsigned long long b, unsigned long n)
{
unsigned long long sum, i;
i = 0;
printf("%u, ", 1);
while (i < n) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%llu", sum);
if (i != (n - 1))
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
