#include <stdio.h>

/**
 * main - Entry piont
 * Return: void
 */
int fibonacci(unsigned long, unsigned long, unsigned long);

int main(void)
{
fibonacci(0, 1, 95);
return (0);
}

int fibonacci(unsigned long f,  unsigned long b, unsigned long n)
{
unsigned long sum, i;

while (i < n) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
i = 0;
printf("%lu, ",sum);
f = b;
b = sum;
++i;
}
printf("\n");
return (0);
}
