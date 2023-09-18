#include "main.h"

/**
 * swap_int - swap the values of 2 integer using 2 input parameter
 *
 * @a: input parameter1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
