#include "main.h"
/**
 * rev_string - desc
 * @s: par
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	temp = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len-1-i];
		s[len - 1 - i] = temp;
	}
}
