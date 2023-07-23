#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Psssssss.
 * @format: Tdddddd
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		printf("%c", format[i + 1] ? ',' : '\0');
		printf("%c", format[i + 1] ? ' ' : '\0');
		i++;
	}
	va_end(args);
	printf("\n");
}
