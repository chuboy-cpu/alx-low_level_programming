#include <stdio.h>

/**
 * main - Entry piont
 * @long double: chara
 * @long double: chara
 * @long double: chara
 * Return: void
 */
int fibonacci(long double, long double, long double);

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

int fibonacci(long double f,  long double b, long double n)
{
long double sum, i;
i = 0;
printf("%u, ", 1);
while (i < n) /*n is how long double we want the fibonacci series will go*/
{
sum = f + b;
printf("%.0Lf", sum);
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
