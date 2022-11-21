#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
*struct sym - structure for the symbols and their associated functions
*@sym: symbol
*@f: function pointer
*/

typedef struct sym
{
	char *sym;
	int (*f)(va_list);
} sym_t;

int _printf(const char *format, ...);
int (*find_function(const char *))(va_list);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);

#endif
