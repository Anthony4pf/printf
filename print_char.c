#include "main.h"

/**
*print_char - write a character to stdout
*@arg: argument
*Return: printed character
*/

int print_char(va_list arg)
{
	int c;

	c = va_arg(arg, int);

	return (write(1, &c, 1));
}
