#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string input parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        printf("%d", *str);
        str++;
    }
    printf('\n');
}
