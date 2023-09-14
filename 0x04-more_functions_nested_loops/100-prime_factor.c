#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: Square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor -  prints the largest prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int x, y;

	while (num % 2 == 0)
		num = num / 2;

	for (x = 3; x <= _sqrt(num); x += 2)
	{
		while (num % x == 0)
		{
			num = num / x;
			y = x;
		}
	}

	if (num > 2)
		y = num;
	printf("%d", y);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
