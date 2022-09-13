#include <stdio.h>

/**
 * main - Entry piont
 * Return: void
 */
int fibonacci(int, int, int);

void main()
{
int n, sum;
sum = fibonacci(0,1,4000000);
printf("%d \n",sum);
}


int fibonacci(int f,  int b, int n)
{
int sum, i, even;
sum = f + b;
i = 0;
if (sum % 2 == 0)
{
even += sum;
}
f = b, b = sum;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
fibonacci(f,b,n);
++i;
}
return (even);
}
