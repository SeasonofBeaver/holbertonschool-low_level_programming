#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - begining
 *
 * Description: print if negative or positive
 *
 * @d: dog structure
 *
 * Return: 0 ends the program
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
