#include "main.h"
/**
 * _strcpy - desc
 * @dest: par
 * @src: par
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_pointer = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_pointer);
}

