#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
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
