#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguements it receives
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: print all arguements paased on a new line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc <= 1)
{
printf("0\n");
}
else
{
int i, sum = 0;
for (i = 0; i < argc; ++i)
{
if (*argv[i] >= 48 && *argv[i] <= 57)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
