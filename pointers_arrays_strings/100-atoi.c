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
	int rightHalf = 0;
	int negative = 0;
	int i, length;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;

	for (i = 0 ; i < length ; i++)
	{
		if (s[i] == '-')
		{
			if (negative == 1)
				negative = 0;
			else
				negative = 1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9'))
		{
			if (number < 100000000)
				number = (number * 10) + s[i] - '0';
			else
				rightHalf = (rightHalf * 10) + s[i] - '0';
		}
	}
	if (negative == 1)
		number *= -1;
	if (rightHalf == 0)
		return (number);
	else
		return (number + rightHalf);
}
