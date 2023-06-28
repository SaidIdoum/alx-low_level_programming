#include "main.h"
/**
 * puts_half - desc
 * @str: para
 */
void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = len / 2;

	if (len % 2 == 1)
	{
		n++;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
