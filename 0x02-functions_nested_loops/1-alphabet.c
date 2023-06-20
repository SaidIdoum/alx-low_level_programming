#include "main.h"
/**
 * print_alphabet - Prints the alphabet from 'a' to 'z'
 * followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

