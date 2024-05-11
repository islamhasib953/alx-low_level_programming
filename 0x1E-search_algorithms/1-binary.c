#include "search_algos.h"

/**
 * binary_search -  searches a value in an array
 *
 * @array: input array
 * @size: size of array
 * @value: value to find it in array
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] > value)
			right = i - 1;
		else if (array[i] < value)
		{
			left = i + 1;
		}
		else
			return (i);
	}
	return (-1);
}
