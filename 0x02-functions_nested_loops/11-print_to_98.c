#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 -  descrp
 * @n: par
 * Result: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
		}
	printf("%d\n",n);

}
