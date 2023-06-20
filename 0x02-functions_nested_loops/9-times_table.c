#include "main.h"
/**
 * times_table - prints nine times table
 * Return: none specified
 */
void times_table(void)
{
	int a, b, R;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			R = a * b;
			if (R <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(R + '0');
			}
			else if (R >= 10 && R <= 81)
			{
				_putchar(' ');
				_putchar((R / 10) + '0');
				_putchar((R % 10) + '0');
			}
			if (b == 9)
			{
				_putchar(',');
				_putchar('\n');
			}
		}
	}
}
