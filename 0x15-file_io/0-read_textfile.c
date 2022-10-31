#include "main.h"

/**
 * read_textfile - function to read a certain byte of file
 * @filename: name of the file to read
 * @letters: number of letters to read from the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sx, wt;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char *) * letters);
	if (str == NULL)
		return (0);
	fd = open("filename", O_RDONLY);
	if (fd < 0)
	{
		free(str);
		return (0);
	}
	sx = read(fd, str, letters);
	if (sx < 0)
	{
		free(str)
		return (0);
	}
	wt = write(STDOUT_FILENO, str, sx);
	if (wt < 0)
		return (0);
	return (wt);
}
