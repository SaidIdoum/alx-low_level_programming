#include <stdio.h>
/**
 * main - description for the program
 *
 * return: 0 - if correct it returns 0
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
