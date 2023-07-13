#include "main.h"
#include <stdlib.h>

/**
 * _calloc - desc
 * @nmemb: par
 * @size: par
 * Return: desc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
