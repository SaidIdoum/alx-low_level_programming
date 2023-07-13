#include <stdio.h>
#include <stdlib.h>
/**
 * verify - desc
 * @str: par
 * Return: par
 */
int verify(const char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * multiply - desc
 * @num1: par
 * @num2: par
 * Return: desc
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - desc
 * @argc: par
 * @argv: par
 * Return: desc
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!verify(argv[1]) || !verify(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
