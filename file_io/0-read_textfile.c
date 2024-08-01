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
	int n, fd;
	char buffer[letters + 1];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == NULL)
		return (0);
	n = read(fd, buffer, letters);
	if (n != letters)
		return (0);
	write(1, buffer, letters);
	return (n);
}
