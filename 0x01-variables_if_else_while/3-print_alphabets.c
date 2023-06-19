#include <stdio.h>
/**
 * main -  betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
	for(i=97; i<123; i++)
	{
		putchar(i);
	}
	for(j=65; j<91; j++)
	{
		putchar(j);
	}
	putchar(10);
	return(0);
}
