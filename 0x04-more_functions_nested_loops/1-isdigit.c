#include "main.h"
/**
 * _isdigit - sees if letter entered is a digit
 * @c: character entered
 * Return: 1 if digit and 0 otherwise
 */
int _isdigitr(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
