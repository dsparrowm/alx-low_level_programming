#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: elements of array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 2)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
		printf("%s\n", argv[0]);
	return (0);
}
