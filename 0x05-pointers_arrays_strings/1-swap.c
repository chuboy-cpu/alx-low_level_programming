#include "main.h"

/**
 * swap_int - function
 * @n: pionter
 * @o: pionter
 */

void swap_int(int *n, int *o)
{
int a;
a = *n;
*n = *o;
*o = a;
}
