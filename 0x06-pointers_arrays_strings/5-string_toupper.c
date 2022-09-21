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
	int n = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < n; i++)
	{
		_putchar(isupper(str[i]));
	}
}
