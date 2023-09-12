#include "main.h"

/**
 * print_last_digit _ printlast digit of a number
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_lastdigit(int n)
{
	int x;
	if (x < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;
	_putchar(x + '0');
	return (x);
}
