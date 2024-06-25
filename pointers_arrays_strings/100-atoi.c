#include <stdio.h>
#include "main.h"

/**
 * _atoi - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int negative = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
		{
			if (negative == 1)
				negative = 0;
			else
				negative = 1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9'))
			number = (number * 10) + s[i] - '0';
	}
	if (negative == 1)
		number *= -1;

	return (number);
}
