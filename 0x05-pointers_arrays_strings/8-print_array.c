#include "main.h"
/**
 * print_array - descr
 * @a: par
 * @n: par
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 2)
	{
		for (i = 0; i <= (n - 2); i++)
		{
			printf("%d, ", a[i]);
		}
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
