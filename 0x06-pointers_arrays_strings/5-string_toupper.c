#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converts to upper case
 * @str: string
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;
	char result[100];
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result = str[i] - 32;
		}
	}
	return (result);
}