#include "main.h"
/**
 * _strncpy - desc
 * @dest: par
 * @src: par
 * @n: par
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp;

	temp = dest;
	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}
	return (dest);
}
