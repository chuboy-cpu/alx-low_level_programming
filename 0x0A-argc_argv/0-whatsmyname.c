#include <stdio.h>

/**
 * main - entry piont
 * @argc: int
 * @argv: int
 * Return: 0
 */

int main(int argc, char **argv)
{
while(argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
