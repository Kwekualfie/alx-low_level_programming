#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: v- actual number of bytes read and printed
 *        0 when function fails or filename is empty.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t z;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(fd);
	return (v);
}	
