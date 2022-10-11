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
printf("%s", d->name);
printf("%d", d->age);
if (d->owner)
{
printf("%s", d->owner);
}
else
{
printf("%s", "nill");
}
}
else
{
printf("%s", "nil");
}
}
}
