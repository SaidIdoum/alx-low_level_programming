#include "main.h"
/**
 * print_diagonal - des
 * @n: desc
 * Return: void
 */
void print_diagonal(int n)
{
	int i, y;

	if (n > 0)
	{
		for  (y = 1; y <= n; y++)
		{
			for (i = 1; i <= (y - 1); i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
