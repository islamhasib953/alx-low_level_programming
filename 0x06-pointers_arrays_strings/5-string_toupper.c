#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase letter
 *
 * @str: string to return
 *
 * Return: string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
