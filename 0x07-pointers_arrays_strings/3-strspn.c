#include "main.h"
#include <string.h>

/**
 * _strspn - search string
 * @s: string
 * @accept: letters to search
 *
 * Return: number of times it appears
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
