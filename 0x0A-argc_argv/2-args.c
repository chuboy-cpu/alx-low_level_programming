#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it recieves
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: prints all arguments passed on a line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int i;

	for (i = 0; i < argc; ++i)
	        printf("%s\n", argv[i]);
    return (0);
}
