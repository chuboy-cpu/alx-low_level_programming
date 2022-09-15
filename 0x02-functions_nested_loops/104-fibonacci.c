#include <stdio.h>

/**
 * main - Entry piont
 * @double: chara
 * @double: chara
 * @int: chara
 * Return: void
 */
int fibonacci(double, double, int);

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

int fibonacci(double f, double b, int n)
{
long double sum;
int i;
i = 0;
printf("%d, ", 1);
while (i < n) /*n is how double we want the fibonacci series will go*/
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
