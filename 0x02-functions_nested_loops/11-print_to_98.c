#include "main.h"

/**
 * print_to_98 - print n to 98 counts separated by comma, followed by space and number should be printednin oredr
 * @n: input
*/
void print_to_98(int n)
{
	int cnt;
	if (n > 98)
		for (cnt = n; cnt > 98; cnt--)
			printf("%d, ", cnt);
	else
		for (cnt = n; cnt < 98; cnt++)
			printf("%d, ", cnt);
	printf("98\n");
}
