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
	int i, carry = 0, lenN1 = 0, lenN2 = 0;

	for (i = 0 ; n1[i] != '0' ; i++)
		lenN1++;
	for (i = 0 ; n1[i] != '0' ; i++)
		lenN2++;
	if ((lenN1 > size_r) || (lenN2 > size_r))
		return (0);
	for (i = size_r - 1 ; i >= 0 ; i--)
	{
		if (n1[i] + n2[i] + carry <= 9)
		{
			r[i] = n1[i] + n2[i] + carry + '0';
			carry = 0;
		}
		else
		{
			r[i] = ((n1[i] + n2[i]) % 10 + '0');
			carry = 1;
		}
	}
	return (r);
}
