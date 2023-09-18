#include "main.h"

/**
 * rev_string - revarse string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, l;
	char temp;


	for (l = 0; s[l] != '\0'; l++)
		;


	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
