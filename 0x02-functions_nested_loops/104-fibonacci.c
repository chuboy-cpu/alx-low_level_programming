#include <stdio.h>

/**
 * main - Entry piont
 * Return: void
 */
int fibonacci(int, int, int);

int main(void)
{
fibonacci(0, 1, 98);
return (0);
}

int fibonacci(int f,  int b, int n)
{
int sum, i;

while (i < n) /*n is how long we want the fibonacci series will go*/
{
sum = f + b;
i = 0;
printf("%d, ",sum);
f = b;
b = sum;
++i;
}
printf("\n");
return (0);
}
