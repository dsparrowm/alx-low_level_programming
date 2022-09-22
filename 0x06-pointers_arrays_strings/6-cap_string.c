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

	for (i = 0; s[i]; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = toupper(s[0]);
		}
		else if (s[i -1] == ' ' || s[0] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
