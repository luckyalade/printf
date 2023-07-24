#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - a function that produces output according to a format
 * @format: output specifier
 *
 * Return: (int)
 */

int _printf(const char *format, ...)
{
	printer ops[] =	{
		{"c", printchar},
		{"s", printstring},
		{NULL, NULL}
	};
	int i = 0, j, count = 0;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (ops[j].f != NULL)
			{
				if (format[i] == *(ops[j].s))
				{
					ops[j].f(args);
					count++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
