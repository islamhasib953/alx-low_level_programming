#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
*/

void times_table(void)
{
	int x, y, z;
	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}
