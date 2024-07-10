#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - begining
 *
 * Description: print if negative or positive
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0 ends the program
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	str = malloc(sizeof(av));
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
		str[i] = av[i] + '\n';
	return (str);
}
