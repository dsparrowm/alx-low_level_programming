#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int x;
	char p[] = *s;

	x = strlen(p);
	return (x);
}
