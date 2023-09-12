#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all the multiples of 3 or 5 below 1024 
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x, y;
	for (x = 0; x <= 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			y += x;
	}
	printf("%d\n",y);
	return (0);
}
