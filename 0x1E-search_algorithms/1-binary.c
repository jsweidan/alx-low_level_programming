#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}


int main(void)
{
	int array[] = {10, 20, 30, 40, 50, 60, 70};
	size_t size = sizeof(array) / sizeof(array[0]);
	int value = 40;

	int result = binary_search(array, size, value);

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
