#include "main.h"

/**
 * swap int - swaps the value of two integers
 *@a: first parameter
 *@b: second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
