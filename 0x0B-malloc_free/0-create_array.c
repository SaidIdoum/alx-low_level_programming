#include "main.h"
/**
 * create_array - desc
 * @size: par
 * @c: par
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}

