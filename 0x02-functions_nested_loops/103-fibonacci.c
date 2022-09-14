#include <stdio.h>

/**
 * main - Entry piont
 * fibonacci - returns the fibonacci series
 * 
 * Return: void
 */
unsigned long fibonacci(unsigned long, unsigned long, unsigned long);
unsigned long even, i;
i = 0;
even = 0;

int main(void)
{
unsigned long sum;
sum = fibonacci(0, 1, 4000000);
printf("%lu \n", sum);
return (0);
}


unsigned long fibonacci(unsigned long f,  unsigned long b, unsigned long n)
{
unsigned long sum;
sum = f + b;
if (sum % 2 == 0)
{
even += sum;
}
f = b;
b = sum;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
fibonacci(f, b, n);
++i;
}
return (even);
}
