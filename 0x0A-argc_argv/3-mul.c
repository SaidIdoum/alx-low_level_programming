#include <stdio.h>
#include <stdlib.h>
/**
 * main - desc
 * @argc: par
 * @argv: par
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);
	return (0);
}
