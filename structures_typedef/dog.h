#ifndef dog_h
#define dog_h

/**
 * struct dog - doggos
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: owner of dog
 *
 * Description: structure of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* dog_h */
