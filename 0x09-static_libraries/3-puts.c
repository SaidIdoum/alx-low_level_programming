#include "main.h"
/**
 * _puts - desc
 * @str: par
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
