#include "main.h"

/**
 * read_textfile -reads a file
 * @filename: name of file to be read
 * @letters: no of letters read
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(char));
	sz = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, sz);
	if (w == -1 || w != sz)
	{
		close(fd);
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (w);
}
