#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - desc
 * @name: fgsdf
 * @age: sdfgsdfgsdf
 * @owner: sdfgsdfgdfg
 * Return: sdfgsdfgdfg
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *name_copy, *owner_copy;

	if (new_dog == NULL)
		return (NULL);

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
