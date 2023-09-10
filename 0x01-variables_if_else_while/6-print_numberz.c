#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: print 0-9 using putchar
 *             while using int variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;
	
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);	
}
