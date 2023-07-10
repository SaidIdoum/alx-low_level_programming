#include "main.h"
/**
 * _strdup - des
 * @str: par
 * Return: O
 */
char *_strdup(char *str)
{
	char *DUPLICATE;
	unsigned int size, i;
	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	DUPLICATE = malloc(sizeof(char) * (size + 1));
	if (DUPLICATE == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		DUPLICATE[i] = str[i];
	}
	return (DUPLICATE);
}
