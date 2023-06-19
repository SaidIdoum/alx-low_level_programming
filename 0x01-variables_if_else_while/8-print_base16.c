#include <stdio.h>
/**
 * main -  betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
