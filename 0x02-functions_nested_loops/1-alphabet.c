#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets from a to z
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
