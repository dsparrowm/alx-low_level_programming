#include "main.h"
#include <string.h>

/**
 * puts - prints every other number
 * @str: strimg to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for(i = 0; i < len; i++)
	{
		_putchar(str[i] * 2);
	}
	_putchar('\n');
}
