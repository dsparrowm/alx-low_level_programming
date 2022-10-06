#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: joined strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int len;

	len = strlen(s1) + strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	strcpy(s3, s1);
	if (n >= strlen(s2))
	{
		strcat(s3, s2);
	}
	else
	{
		strncat(s3, s2, n);
	}
	return (s3);
}
