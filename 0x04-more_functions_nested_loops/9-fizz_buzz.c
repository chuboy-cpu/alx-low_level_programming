#include <stdio.h>

/**
 * main - Entry piont
 * Return: 0
 */

int main(void)
{
int i;
printf("%d", 1);
for (i = 2; i <= 100; ++i)
{
printf(" ")
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
}
return (0);
}
