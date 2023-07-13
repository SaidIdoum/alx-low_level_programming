#include "main.h"
/**
 * string_nconcat - desc
 * @s1: par
 * @s2: par
 * @n: par
 * Return: desc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_1, size_2, i;
	char *full_string;

	size_1 = 0;
	size_2 = 0;
	i = 0;
	if (s1 != NULL)
	{
		size_1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		size_2 = strlen(s2);
	}
	if (n >= size_2)
	{
		n = size_2;
	}
	full_string = malloc(sizeof(char) * (size_1 + n + 1));
	if (full_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size_1; i++)
	{
		full_string[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		full_string[size_1 + i] = s2[i];
	}
	full_string[size_1 + n] = '\0';
	return (full_string);
}
