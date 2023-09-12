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
