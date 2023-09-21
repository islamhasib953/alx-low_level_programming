#include "main.h"
#include <stdio.h>

/**
 * islower - determines whether ascii is lowercase
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 11; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 *
 * @s: input string
 *
 * Return: string with capitalizes words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
