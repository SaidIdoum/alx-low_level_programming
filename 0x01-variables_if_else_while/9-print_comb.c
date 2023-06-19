#include <stdio.h>
/**
 * main -  betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; )
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i = i+1;
	}
	putchar(10);
	return (0);
}
