#include <stdio.h>

/**
 * main - Entry piont
 * fibonacci - returns the fibonacci series
 * 
 * Return: void
 */
int fibonacci(int, int, int);
int even, i;
i = 0; even = 0;

int main(void)
{
int sum;
sum = fibonacci(0, 1, 4000000);
printf("%d \n", sum);
return (0);
}


int fibonacci(int f,  int b, int n)
{
int sum;
sum = f + b;
if (sum % 2 == 0)
{
even += sum;
}
f = b, b = sum;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
fibonacci(f, b, n);
++i;
}
return (even);
}
