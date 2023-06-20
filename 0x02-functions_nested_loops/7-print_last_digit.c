#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: parameter
 * Return: i
 */
int print_last_digit(int i)
{
	int r;
	
	if (i < 0)
	{
		i = -1 * i;
	}
	r = i % 10;
	_putchar(r);
	return (r);
}
