#include <stdio.h>
#include <stdlib.h>
/**
 * main - desc
 * @argc: par
 * @argv: par
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		char *x = argv[i];
		int j = 0;

		while (x[j] != '\0')
		{
			if (x[j] < '0' || x[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		int num = atoi(x);

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
