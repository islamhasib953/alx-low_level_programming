#include "main.h"
#include <stdio.h>

/**
 * puts - prints every character of a string
 *
 * @str: stringparameter input
 *
 * Return Nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%d", str[i]);
	}
	printf("\n");
}
