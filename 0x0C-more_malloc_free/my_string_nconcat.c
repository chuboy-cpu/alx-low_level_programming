#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
int x, y, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = malloc(sizeof(s1) + n);
if (p == NULL)
{
exit(98);
}
for (x = 0; x < sizeof(s1) + 2; ++x)
{
*(p + x) = *(s1 + x);
}
i = 0;
for (y = x; i < n; ++y)
{
*(p + y) = *(s2 + i);
++i;
}
*(p + y) = '\0';
return (p);
}