#include "main.h"

/**
 * puts_half - prints half of the numbers
 * @str: character to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = strlen(str) / 2;
	int len = strlen(str);

	if (strlen(str) % 2 != 0)
	{
		int n = (strlen(str) - 1) / 2;
	}
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
}
