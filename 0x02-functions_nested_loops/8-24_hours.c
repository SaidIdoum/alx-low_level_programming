#include "main.h"
/**
 * jack_bauer - text
 * Return: void
 */
void jack_bauer(void)
{
	int dh, h, dm, m;

	for (dh = 0; dh <= 2 ; dh++)
	{
		if (dh != 2)
		{
			for (h = 0; h <= 9; h++)
			{
				for (dm = 0 ; dm <= 5; dm++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(dh + '0');
						_putchar(h + '0');
						_putchar(':');
						_putchar(dm + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (h = 0; h <= 3; h++)
			{
				for (dm = 0 ; dm <= 5; dm++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(dh + '0');
						_putchar(h + '0');
						_putchar(':');
						_putchar(dm + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
