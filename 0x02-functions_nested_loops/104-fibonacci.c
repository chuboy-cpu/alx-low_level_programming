#include <stdio.h>

/**
 * main - Entry piont
 * @double: chara
 * @double: chara
 * @double: chara
 * Return: void
 */
int fibonacci(double, double, double);

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

int fibonacci(double f,  double b, double n)
{
double sum, i;
i = 0;
printf("%u, ", 1);
while (i < n) /*n is how double we want the fibonacci series will go*/
{
sum = f + b;
printf("%.0f", sum);
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
