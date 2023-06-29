#include "main.h"
/**
 * rot13 - desc
 * @string: par
 * Return: desc
 */
char *rot13(char *string)
{
	int i, j;
	char ALPHABETIC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; ALPHABETIC[j] != '\0'; j++)
		{
			if (string[i] == ALPHABETIC[j])
			{
				string[i] = ROT13[j];
			}
		}
	}
	return (string);
}

