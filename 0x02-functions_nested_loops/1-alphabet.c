#include "main.h"
/**
 * main -  print a to z and new line
 *
 * Return: void
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

