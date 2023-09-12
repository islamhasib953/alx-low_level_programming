#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued fibonacci sequence not exeed 4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	float tot_sum;
        unsigned long fib1 = 0, fib2 = 1, sum;
	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			tot_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", tot_sum);
        return (0);
}
-- INSERT --                                                            1,1           Top
