#include "main.h"

/**
 * print_chessboard - function
 * @a: 2d array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int x, y, m;
m = 0;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
if (x > m)
{
_putchar('\n');
++m;
}
_putchar(a[x][y]);
}
}
}
