#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: parameter
 * Return: i
 */
int print_last_digit(int i)
{
	int r;
	
	r = i % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
