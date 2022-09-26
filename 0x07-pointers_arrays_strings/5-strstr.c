#include "main.h"
#define NULL 0

/**
 * _strstr - function
 * @haystack: pionter
 * @needle: chara
 * Return: j
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, count;
i = 0;
j = 0;
count = 0;
char *save;
while (*(haystack + i) != '\0')
{
while (*(needle + j) != '\0')
{
if (*(needle + j) == *(haystack + i))
{
*(save + j) = haystack + i;
++j;
}
else
{
break;
}
}
++i;
}
while (*(needle + count) != '\0')
{
++count;
}
if (count == j)
{
return (save);
}
return (NULL);
}
