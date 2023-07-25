#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _printf(const char *format, ...);
/**
 * _printf - a function that produces output according to a format
 * @format: output specifier
 *
 * Return: (int)
 */

int _printf(const char *format, ...)
{
	printer ops[] =	{
		{"c", printchar}, {"s", printstring}, {"d", printf_int},
		{"i", printf_dec}, {NULL, NULL}};
	int i = 0, j, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar(format[i]);
				count++;
			}
			else if (format[i] != 'c' && format[i] != 's')
			{

				_putchar('%');
				count++;
				_putchar(format[i]);
				count++;
			}
			else if (format[i] != '\0')
			{
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
		}
		else if (format[i] != '\0')
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
