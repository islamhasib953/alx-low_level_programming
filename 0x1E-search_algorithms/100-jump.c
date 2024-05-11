#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 *
 * @array: input array
 * @size: size of array
 * @value: value to find it in array
 * Return: Always EXIT_SUCCESS
 *
 * Description: print value every compare with target in array
 *				and use step to jump in array using root of size
 */

int jump_search(int *array, size_t size, int value)
{
	size_t last, stp, jump;

	if (size == 0 || array == NULL)
		return (-1);

	stp = sqrt(size);
	for (last = jump = 0; array[jump] < value && jump < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		last = jump;
		jump += stp;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", last, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; last < jump && array[last] < value; last++)
		printf("Value checked array[%ld] = [%d]\n", last, array[last]);
	printf("Value checked array[%ld] = [%d]\n", last, array[last]);

	return (array[last] == value ? (int)last : -1);
}
