#include "main.h"
/**
 * _isupper - sees if letter entered is upper
 * @c: character entered
 * Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
