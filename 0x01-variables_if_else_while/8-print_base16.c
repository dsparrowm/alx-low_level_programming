#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success
 */
int main(void)
{
	int x = '0';
	char a = 'a';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
