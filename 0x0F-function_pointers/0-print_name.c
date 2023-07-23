#include <stdio.h>
/**
 * print_name - desc
 * @name: par
 * @f: par
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

