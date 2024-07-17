#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: to first index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Comparing %d\n", array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}


int main(void)
{
	int array[] = {10, 20, 30, 40, 50};
	size_t size = sizeof(array) / sizeof(array[0]);
	int value = 30;

	int result = linear_search(array, size, value);

	if (result != -1)
	{
		printf("Value %d found at index %d\n", value, result);
	}
	else
	{
		printf("Value %d not found in the array\n", value);
	}

	return (0);
}
