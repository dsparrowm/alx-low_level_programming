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
	return (strncmp(s1, s2));
}
