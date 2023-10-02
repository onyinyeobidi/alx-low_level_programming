#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * buf: buffer create to act as a copy to the original memory
 * dig: a pointer that contains address of the name of the new file created
 * Return: w- actual number of bytes read and printed
 *   0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t dig;
	ssize_t w;
	ssize_t b;

	dig = open(filename, O_RDONLY);
	if (dig == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(dig, buf, letters);
	w = write(STDOUT_FILENO, buf, b);
	free(buf);
	close(dig);
	return (w);
}
