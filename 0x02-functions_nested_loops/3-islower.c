#include "main.h"
#include <ctype.h>
/**
 * int _islower - checks if a character is lowercase
 *
 * Return: always o for success
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
