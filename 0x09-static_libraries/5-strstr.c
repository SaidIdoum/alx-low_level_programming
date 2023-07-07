#include "main.h"
/**
 * _strstr - desc
 * @haystack: par
 * @needle: par
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *begin = haystack;
	char *substring = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		begin = haystack;
		substring = needle;
		while (*haystack && *substring && *haystack == *substring)
		{
			haystack++;
			substring++;
		}
		if (*substring == '\0')
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
