#include <stdio.h>
/**
 * main - desc
 * Return: 0
 */
int main()
{
	long int n;
	int i;

	n = 612852475143;
	while (n % 2 == 0)
	{
		printf("2, ");
		n = n / 2;
	}
	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
		printf("%d, ", i);
		n = n / i;
		}
	}
	printf("\n");
	return (0);
}
