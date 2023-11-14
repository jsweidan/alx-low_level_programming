#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @index: the index of the bit
 * @n: the number of times to check the value
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
