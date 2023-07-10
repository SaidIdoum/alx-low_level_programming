#include "main.h"
/**
 * argstostr - desc
 * @ac: par
 * @av: par
 * Return: ret
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, full_size;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	full_size = 0;
	for (i = 0; i < ac; i++)
	{
		size = 0;
		while (av[i][size] != '\0')
		{
			size++;
		}
		full_size += size + 1;
	}
	str = malloc(sizeof(char) * (full_size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		size = 0;
		while (av[i][size] != '\0')
		{
			str[j] = av[i][size];
			j++;
			size++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
