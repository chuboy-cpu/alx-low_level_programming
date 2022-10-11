#include "dog.h"
#include <stdio.h>

/**
 * _strncpy - function
 * @dest: pionter
 * @src: pionter
 * @n: integer
 * Return: j
 */

char *_strncpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}

/**
 * print_dog - print a struct dog
 *
 * @d: pointer to struct dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(struct dog));
if (my_dog == NULL)
{
return (NULL);
}
my_dog->name = malloc(sizeof(name));
if (my_dog->name)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(owner));
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}
_strncpy(my_dog->name, name);
_strncpy(my_dog->owner, owner);
my_dog->age = age;
return (my_dog);
}
