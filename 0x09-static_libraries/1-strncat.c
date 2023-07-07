#include "main.h"
/**
 * _strncat - desc
 * @dest: par
 * @src: par
 * @n: par
 * Return: restl
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}
