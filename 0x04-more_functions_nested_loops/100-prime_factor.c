#include <stdio.h>

/**
 * main - Entry piont
 * Return: 0
 * a program that finds and prints the largest prime factor of a number
 */

int main(void)
{
long long int check_prime;
long long int i, num, max;
num = 612852475143;
max = 0;
for (i = 2; i < num; ++i)
{
int prime;
if (num % i == 0)
{
if (i % 2 != 0 || i == 2)
{
for (check_prime = 3; check_prime < num; check_prime += 2)
{
if (i % check_prime == 0 && i != check_prime)
{
prime = 1;
continue;
}
}
if (prime != 1)
{
if (i > max)
{
max = i;
}
}
}
}
}
printf("The max prime factor %ld \n", max);
return (0);
}
