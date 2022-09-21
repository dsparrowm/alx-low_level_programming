#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the compared result
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
