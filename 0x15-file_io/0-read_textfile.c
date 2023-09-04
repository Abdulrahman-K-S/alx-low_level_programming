#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 *                 it to the POSIX standard output.
 *
 * @filename: The name of the files to read.
 * @letters: THe number of bytes to read.
 *
 * Return: The number of bytes read/printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);

	close(fd);

	return (bytes);
}
