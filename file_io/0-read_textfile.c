#include "main.h"

/**
 * binary_to_uint - Read the Code
 *
 * Describtion: converts bin to decimal
 *
 * @b: binary number
 *
 * Return: decimal number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenRd, lenWr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenRd = read(fd, buffer, letters);
	close(fd);
	if (lenRd == -1)
	{
		free(buffer);
		return (0);
	}
	lenWr = write(STDOUT_POSIX, buffer, letters);
	free(buffer);
	if (lenWr != lenRd)
		return (0);
	return (lenWr);
}
