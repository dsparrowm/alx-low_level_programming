#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}

