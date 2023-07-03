#include "main.h"
/**
 * *_memcpy - desc
 * @dest: par
 * @src: par
 * @n: par
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointer_dest = dest;
	char *poointer_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*pointer_dest = *pointer_src;
		pointer_dest++;
		pointer_src++;
	}
	return (dest);
}
