#include "dog.h"
#include <stdio.h>
/**
 * init_dog - desc
 * @d: par
 * @name: par
 * @age: par
 * @owner: par
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
