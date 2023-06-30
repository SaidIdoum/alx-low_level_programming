#include "main.h"
/**
 * print_number - desc
 * @n: par
 */
void print_number(int n)
{
	int order, digit;

	order = 1;
	digit = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / order >= 10)
	{
		order = order * 10;
	}
	while (order != 0)
	{
		digit = (n / order) % 10;
		_putchar(digit + '0');
		order = order / 10;
	}
}
