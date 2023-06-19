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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
