#include "main.h"
/**
 * *_memset - desc
 * @s: par
 * @b: par
 * @n: par
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (n > 0)
	{
		*pointer = b;
		pointer++;
		n--;
	}
	return (s);
}
