#include "main.h"

/**
 * red_textfile - Read the Code
 *
 * Describtion: reads file and prints n letters
 *
 * @filename: filename to be opened
 *
 * @letters: number of lettes to be printed
 *
 * Return: length of accually printed letters
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
	lenWr = write(STDOUT_FILENO, buffer, lenRd);
	free(buffer);
	if (lenWr != lenRd)
		return (0);
	return (lenWr);
}
