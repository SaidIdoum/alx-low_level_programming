#include "main.h"
/**
 * str_concat - desc
 * @s1: par
 * @s2: par
 * Return: return
 */
char *str_concat(char *s1, char *s2)
{
	char *full_string;
	int size1, size2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}
	full_string = malloc(sizeof(char) * (size1 + size2 + 1));
	if (full_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		full_string[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		full_string[i + j] = s2[j];
	}
	full_string[i + j] = '\0';
	return (full_string);
}
