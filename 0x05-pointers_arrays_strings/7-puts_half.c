#include "main.h"
#include <stdio.h>

/**
 * puts_half- print second half of a string
 *
 * @str: char array string type
 *
 * Description: if odd number of chars, print (length -1) / 2
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		printf(str[i]);
	}
	printf("\n");
}
