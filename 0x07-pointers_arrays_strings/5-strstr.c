#include "main.h"
#include <string.h>

/**
 * _strstr - search
 * @haystack: where to search
 * @needle: what to search
 *
 * Return: searched string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
