#include <stdio.h>

/**
 * main - Entry piont
 * 
 * fibonacci - returns fibonacci series
 * Return: void
 */
int fibonacci(int, int, int);
int i = 0;
int main(void)
{
fibonacci(0, 1, 50);
return (0);
}

int fibonacci(int f,  int b, int n)
{
int sum;
sum = f + b;
printf("%d, ", sum);
f = b, b = sum;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
fibonacci(f, b, n);
++i;
};
return (0);
}
