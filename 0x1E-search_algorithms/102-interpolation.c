#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - searches for a value in a sorted array of
 *                      integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to find it in array
 * Return: Always EXIT_SUCCESS
 *
 * Description: Every time you compare value in the array to the value you are
 *				searching, you have to print this value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, pos;

	for (l = 0, h = size - 1; l <= h;)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
