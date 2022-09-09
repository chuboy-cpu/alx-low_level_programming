#include <stdio.h>

int main(void)
{
    char alpha;
    for (alpha ='z'; alpha >= 'a'; --alpha)
    {
        putchar(alpha);
    }
    putchar('\n');
    return (0);
}
