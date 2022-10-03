#include "main.h"
#include <string.h>

/**
 * str_concat - joins two strings
 * @s1: destination
 * @s2: source
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = strcat(s1, s2);
	return (s3);
}
