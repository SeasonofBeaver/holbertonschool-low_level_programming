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
	int number = 0;
	bool negative = false;
	int i, length;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;

	for (i = 0 ; i < length ; i++)
	{
		if (s[i] == '-')
		{
			if (negative)
				negative = false;
			else
				negative = true;
		}
		else if ((s[i] >= '0') && (s[i] <= '9')
			number = (number * 10) + str[i] + '0';
	}
	if (negative)
		number *= -1

	return (number);
}
