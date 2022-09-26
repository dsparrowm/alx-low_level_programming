#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches for the first letter in str2
 * @s: search database
 * @accept: search phrase to compare
 *
 * Return: searched number of chars
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
