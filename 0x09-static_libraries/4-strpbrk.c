#include "main.h"
/**
 * _strpbrk - desc
 * @s: par
 * @accept: par
 * Return: car
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
