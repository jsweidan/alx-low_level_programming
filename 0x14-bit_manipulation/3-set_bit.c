#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 *
 * @n: pointer to the bit being manipulated
 * @index: the position of the bit
 * Return: 1 on success and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
