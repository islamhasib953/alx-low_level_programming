#include "main.h"

/**
 * print_alphabet_x10 - function that willprint the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int x, y;
	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
