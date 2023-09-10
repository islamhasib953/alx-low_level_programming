#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48; /*48; decimal rep of 0*/

	while (x <= 102) /*102; decimal rep of f*/
	{
		putchar(x);

		/* after 9 we jump till 96; */
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');

	return (0);
}
