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

	if (str == NULL)
		return (NULL);
	str2 = strdup(str);
	if (str2 == NULL)
		return (NULL);
	return (str2);
}
