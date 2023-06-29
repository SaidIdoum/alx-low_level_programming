#include "main.h"
/**
 * cap_string - desc
 * @string: desc
 * Return: desc
 */
char *cap_string(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	 {
		 if (string[i] >= 'a' && string[i] <= 'z')
		 {
			 if (i == 0 || string[i - 1] == ' ' || string[i - 1] == '\t' || string[i - 1] == '\n' || string[i - 1] == ',' || string[i - 1] == ';' || string[i - 1] == '.' || string[i - 1] == '!' || string[i - 1] == '?' || string[i - 1] == '"' || string[i - 1] == '(' || string[i - 1] == ')' || string[i - 1] == '{' || string[i - 1] == '}')
			 {
				 string[i] = string[i] - 'a' + 'A';
			 }
		}
		i++;
	}
		return (string);
}
