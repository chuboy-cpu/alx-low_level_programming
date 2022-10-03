#include <stdio.h>

/**
 * main - entry piont
 * @argc: we 
 * @argv: we 
 * Return: int 
 */

int main(int argc, char **argv)
{
while(argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
