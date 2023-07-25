#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void printchar(va_list a);
void printstring(va_list a);
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct op - struct for 2
 * @s: character to check
 * @f: function to point to
 */
typedef struct op
{
char *s;
void (*f)(va_list a);
} printer;


#endif
