#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory
 *@b: number of bytes to allocate
 *Description: Returns a pointer to the allocated memory
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		printf(stderr, "memory allocation failed\n");
		exit(98);
	}

	return (arr);

}
