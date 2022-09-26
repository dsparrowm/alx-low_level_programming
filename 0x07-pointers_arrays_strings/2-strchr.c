#include "main.h"
#include <string.h>

/**
 * _strchr - searches for first occurrence in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
