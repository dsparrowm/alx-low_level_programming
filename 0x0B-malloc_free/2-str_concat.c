#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: destination
 * @s2: source
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0;
	char *s3;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len));
	if (s3 == NULL)
		return (NULL);
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
