#include "main.h"
/**
 * string_toupper - desc
 * @string: desc
 * Return: desc
 */
char *string_toupper(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 'a' + 'A';
		}
		i++;
	}
	return (string);
}
