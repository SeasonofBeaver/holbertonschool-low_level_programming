#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - begining
 *
 * Description: print if negative or positive
 *
 * @d: dog structure
 *
 * Return: 0 ends the program
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);
		printf("Age: ");
		if (d->age >= 0)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
