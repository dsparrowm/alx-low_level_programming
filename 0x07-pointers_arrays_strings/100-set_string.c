#include "main.h"
#include <string.h>

/**
 * set_string - set the value to char
 * @s: string
 * @to: change this pointer's value
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
