#include "main.h"
/**
 * leet - desc.
 * @string: desc
 * Return: desc
 */
char *leet(char *string)
{
	int i, j;
	char START[] = "AEOTL";
	char LEET[] = "43071";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; START[j] != '\0'; j++)
		{
			if (string[i] == START[j] || string[i] == (START[j] + 32))
			{
				string[i] = LEET[j];
			}
		}
	}
	return (string);
}
