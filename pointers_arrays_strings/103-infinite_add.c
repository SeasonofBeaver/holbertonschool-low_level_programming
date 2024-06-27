#include <stdio.h>
#include "main.h"

/**
 * infinite_add - check the code
 *
 * Description: print
 *
 * @n1: input number 1
 *
 * @n2: input number 2
 *
 * @r: buffer for results
 *
 * @size_r: size of numbers
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, carry = 0, lenN1 = 0, lenN2 = 0, length;

	for (i = 0 ; n1[i] != '0' ; i++)
		lenN1++;
	for (i = 0 ; n1[i] != '0' ; i++)
		lenN2++;
	if (lenN1 > lenN2)
		length = lenN1;
	else
		length = lenN2;
	for (i = length - 1 ; i >= 0 ; i--)
	{
		if (n1[i] + n2[i] + carry <= 9)
		{
			r[i] = n1[i] + n2[i] + carry;
			carry = 0;
		}
		else
		{
			r[i] = (n1[i] + n2[i]) % 10;
			carry = 1;
		}
	}
	if (length > size_r)
	{
		r = 0;
		return (r);
	}
	else
		return (r);
}
