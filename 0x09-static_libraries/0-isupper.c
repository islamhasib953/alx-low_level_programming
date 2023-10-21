#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 * Return: i ifit isuppercase, 0 else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
