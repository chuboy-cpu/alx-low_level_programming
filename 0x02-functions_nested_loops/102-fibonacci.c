#include <stdio.h>

/**
 * main - Entry piont
 * 
 * fibonacci - returns fibonacci series
 * Return: void
 */
int fibonacci(int, int, int);

int main(void)
{
fibonacci(0, 1, 50);
return (0);
}

int fibonacci(int f,  int b, int n)
{
int sum, i;
i = 0;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
printf("%d, ", sum);
f = b;
b = sum;
++i;
}
return (0);
}
