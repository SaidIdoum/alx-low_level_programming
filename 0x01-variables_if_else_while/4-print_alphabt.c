#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's prints a to z
 * without e and q'
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar(10);
	return (0);
}
