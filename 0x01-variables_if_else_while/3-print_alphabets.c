#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	char c;
	char a;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
