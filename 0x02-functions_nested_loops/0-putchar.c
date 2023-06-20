#include <stdio.h>
/**
 * main -  betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
	char word_to_print[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(word_to_print[i]);
	}
	return (0);
}
