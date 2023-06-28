#include "main.h"
/**
 * _strlen - desc
 * @s: par
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	
	return (len);
}
