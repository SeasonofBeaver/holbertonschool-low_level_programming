#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <dog.h>

/**
 * init_dog - begining
 *
 * Description: print if negative or positive
 *
 * @d: dog structure
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: 0 ends the program
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
