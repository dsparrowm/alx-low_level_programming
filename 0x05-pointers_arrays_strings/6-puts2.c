#include "main.h"

/**
 * puts - prints every other number
 * @str: strimg to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = sizeof(str) / sizeof(str[0]);

	for(i = 0; i < len; i++)
	{
		_putchar(str[i] * 2);
	}
	_putchar('\n');
}
