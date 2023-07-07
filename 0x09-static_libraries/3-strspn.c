#include "main.h"
/**
 * _strspn - desc
 * @s: par
 * @accept: par
 * Return: desc
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c;
	int j;

	c = 0;
	while (*s)
	{
		j = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j = 1;
				break;
			}
		}
		if (!j)
			return (c);
		c++;
		s++;
	}
	return (c);
}
