#include "main.h"

/**
 * @brief 
 * 
 */

int mul(int a, int b)
{
mult = a * b;
if (mult <= 9)
{
_putchar(mult);
}
else if (mult < 100)
{
_putchar('0' + mult / 10);
_putchar('0' + mult % 10);
}
else
{
_putchar('0' + mult / 100);
_putchar('0' + (mult % 100) / 10);
_putchar('0' + (mult % 100) % 10);
}
}
