#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - creates dog information
 *
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 *Description: defines a new type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
