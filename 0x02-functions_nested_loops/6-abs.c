#include "main.h"

/**
 * _abs - function that computes the absolute value of an iteger
 *
 * on: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
