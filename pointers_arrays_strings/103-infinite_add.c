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
	int i, j, temp, carry = 0, lenN1 = 0, lenN2 = 0, sum;

	for (i = 0 ; n1[i] != '\0' ; i++)
		lenN1++;
	for (i = 0 ; n2[i] != '\0' ; i++)
		lenN2++;
	if ((lenN1 >= size_r) || (lenN2 >= size_r))
		return (0);
	lenN1--;
	lenN2--;
	for (i = 0 ; i < size_r ; i++, lenN1--, lenN2--)
	{
		if ((lenN1 < 0) && (lenN2 < 0) && (carry == 0))
			break;
		sum = 0;
		if (lenN1 >= 0)
			sum += n1[lenN1] - '0';
		if (lenN2 >= 0)
			sum += n2[lenN2] - '0';
		if (sum + carry <= 9)
		{
			r[i] = sum + carry + '0';
			carry = 0;
		}
		else
		{
			r[i] = ((sum + carry) % 10 + '0');
			carry = 1;
		}
	}
	r[i] = '\0';
	if (lenN1 >= 0 || lenN2 >= 0 || carry > 0)
		return (0);
	for (i--, j = 0; j < i; i--, j++)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
