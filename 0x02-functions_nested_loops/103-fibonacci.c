#include <stdio.h>

/**
 * main - Entry piont
 * fibonacci - returns the fibonacci series
 * 
 * Return: void
 */
unsigned long fibonacci(unsigned long, unsigned long, unsigned long);

int main(void)
{
unsigned long sum;
sum = fibonacci(0, 1, 4000000);
printf("%lu \n", sum);
return (0);
}


unsigned long fibonacci(unsigned long f,  unsigned long b, unsigned long n)
{
unsigned long even, i, sum;
i = 0;
even = 0;
while (i < n) 
{
sum = f + b;
if (sum % 2 == 0)
{
even += sum;
}
f = b;
b = sum;
++i;
}
return (even);
}
