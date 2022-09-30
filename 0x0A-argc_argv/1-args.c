#include <stdio.h>

/**
 * main - entry point for my program
 * @argc: count of arguments
 * @argv: elements of array
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
