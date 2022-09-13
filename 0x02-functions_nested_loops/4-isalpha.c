#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetical characters
 * @c: character to be checked
 *
 * Return: always 0 success
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
