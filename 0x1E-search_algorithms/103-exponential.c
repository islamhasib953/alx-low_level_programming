#include "search_algos.h"
#include <math.h>

/**
 * binary_search -  searches a value in an array
 *
 * @array: input array
 * @left: first value in array to search between
 * @right: second value in array to search between
 * @value: value to find it in array
 * Return: Always EXIT_SUCCESS
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 *                  integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to find it in array
 * Return: Always EXIT_SUCCESS
 *
 * Description: Every time you compare a value in the array to the value you are searching for,
 *              you have to print this value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}

