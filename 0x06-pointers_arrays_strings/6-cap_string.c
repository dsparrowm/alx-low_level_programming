#include "main.h"

/**
 * cap_string - capitalize all words
 * @s: string to work on
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] -  32;
	}
	for (; s[i]; i++)
	{
		if (s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -  32;
		}
	}
	return (s);
}
