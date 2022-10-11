#include "dog.h"
#include <stdio.h>

/**
 * init_dog - dog definition
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner)
{
printf("%s", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
else
{
printf("Name: (nil)\n");
}
}
}
