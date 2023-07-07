#include "main.h"
/**
 * _atoi - desc
 * @s: par
 * Return: sign of result
 */
int _atoi(char *s)
{
	int Sign_of_nr, Result_integer, i, temp;

	Sign_of_nr = 1;
	Result_integer = 0;
	i = 0;
	temp = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	{
		i++;
	}
	if (s[0] == '-')
	{
		Sign_of_nr = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		temp = s[i] - '0';
		if (temp >= 0 && temp <= 9)
		{
			Result_integer = Result_integer * 10 + (s[i] - '0');
		i++;
		}
		else
		{
			break;
		}
	}
	return (Result_integer * Sign_of_nr);
}

