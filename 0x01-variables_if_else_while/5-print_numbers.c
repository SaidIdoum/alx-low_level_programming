#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints zero to nine
 * and new line
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
