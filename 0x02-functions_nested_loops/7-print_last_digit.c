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
		i = -i;
	}
	r = i % 10;
	_putchar(r + '0');
	return (r);
}
