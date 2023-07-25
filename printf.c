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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count++;
			_putchar(format[i]);
		else if (format[i + 1] == '%')
		{
			count++;
			_putchar('%');
			i++;
		}
		else if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != 'i' && format[i + 1] != 'd'
				&& format[i + 1] != 'R' && format[i + 1] != 'r')
		{
			counter++;
			_putchar('%');
			counter++;
			_putchar(format[i + 1]);
			i++;
		}
		else
		{
			for (j = 0; ops[j],s != NULL; j++)
				if (format[i + 1] == *(ops[j].s)
					counter++;
					ops[j].f(args);
			i++;
		}
	}
	va_end(ap);
	return (counter);
}
