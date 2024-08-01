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
	unsigned long int n, fd;
	char buffer[letters];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == 0)
		return (0);
	n = fread(fd, buffer, letters);
	if (n != letters)
		return (0);
	fwrite(1, buffer, letters);
	return (n);
}
