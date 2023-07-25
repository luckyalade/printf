#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printchar - a function that prints character
 * @a: variadic arguments
 *
 * Return: (void)
 */

void printchar(va_list a)
{
	char ch = va_arg(a, int);

	_putchar(ch);
}

/**
 * printstring - a function that prints string
 * @a: variadic arguments
 *
 * Return: (void)
 */

void printstring(va_list a)
{
	char *str = va_arg(a, char *);
	int i = 0;

	if (str == NULL)
	str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(*str[i]);
		i++;
	}

}
