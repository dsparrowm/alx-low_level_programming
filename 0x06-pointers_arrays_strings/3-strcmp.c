#include "main.h"
#include <string.h>
/**
 * _strncmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the compared result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
