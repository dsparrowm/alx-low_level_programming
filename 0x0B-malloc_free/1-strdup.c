#include "main.h"
#include <string.h>

/**
 * _strdup - copies another string and returns a pointer
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str2;

	str2 = strdup(str);
	if (str2 == NULL || str == NULL)
		return (NULL);
	else
		return (str2);
}
