#include <stdio.h>

/**
 * main - Entry piont
 * Return: void
 */
int fibonacci(int, int, int);

int main(void)
{
fibonacci(0, 1, 50);

}

int fibonacci(int f,  int b, int n)
{
int sum, i;
sum = f + b;
i = 0;
printf("%d, ",sum);
f = b, b = sum;
while (i < n) /*n is how long we want the fibonacci series will go*/
{
fibonacci(f, b, n);
++i;
}
printf("\n")
}
