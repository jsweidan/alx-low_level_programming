#include <stdio.h>
#include "main.h"

/**
 *malloc_checked - function that allocates memory
 *@b: number of bytes to allocate
 *Description: Returns a pointer to the allocated memory
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
