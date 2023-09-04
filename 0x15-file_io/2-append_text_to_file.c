#include "main.h"

/**
 * _strlen - A function that returns the length of the string entered.
 *
 * @s: The string to get it's length.
 *
 * Return: The length of @s.
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - A function that appends text at the end of a file.
 *
 * @filename: The file name to create.
 * @text_content: The text to write in the file.
 *
 * Return: 1 on success otherwise 0.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);
	return (bytes == len ? 1 : -1);
}
