#include "main.h"

/**
 * get_bit - get the bit at the index
 * @n: the number to index
 * @index: the index to get
 * Return: the bit state or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
