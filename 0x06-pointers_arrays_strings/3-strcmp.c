#include "main.h"
/**
 * _strcmp - par
 * @s1: par
 * @s2: par
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-1);
	}
	else if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
