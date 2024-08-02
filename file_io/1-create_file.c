#include "main.h"

/**
 * _strlen - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	return (length);
}

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 *
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
