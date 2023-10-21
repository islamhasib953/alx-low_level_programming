#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime umber
 * @othen: int
 * @n: int
 * Return: 0 or 1
*/

int check_prime(int n, int othen);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < nif they can divide it
 * @n: int
 * @othen: int
 * Return: int
*/

int check_prime(int n, int othen)
{
	if (othen >= n && n > 1)
		return (1);
	else if (n % othen == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othen + 1));
}
