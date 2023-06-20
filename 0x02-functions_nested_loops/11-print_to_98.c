#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 -  descrp
 * @n: par
 * Result: void
 */
void print_to_98(int n);
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
		}
	}
	else
		for (i = 98; i <= n; i++)
		{
			printf("%i", i);
		}
}
