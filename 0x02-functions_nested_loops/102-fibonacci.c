#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers starting with 1 and 2 following by new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int cnt;
	unsigned long fib1 = 0, fib2 = 1, sum;
	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
