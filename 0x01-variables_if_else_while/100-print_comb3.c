#include <stdio.h>
/**
 * main -  betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
