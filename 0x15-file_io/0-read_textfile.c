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
	char *suf;
	ssize_t et;
	ssize_t v;
	ssize_t z;

	et = open(filename, O_RDONLY);
	if (et == -1)
		return (0);
	suf = malloc(sizeof(char) * letters);
	z = read(et, suf, letters);
	v = write(STDOUT_FILENO, suf, z);

	free(suf);
	close(et);
	return (v);
}	
