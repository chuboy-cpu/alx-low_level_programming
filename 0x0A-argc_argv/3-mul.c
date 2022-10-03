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
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
