#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			z = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				z = y % 10;
			}
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}

