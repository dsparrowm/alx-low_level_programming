#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: character to be checked
 *
 * Return: 1 if its upper else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
