#include "main.h"

/**
*print_char - write a character to stdout
*@arg: argument
*Return: printed character
*/

int print_char(va_list arg)
{
	char c;
	int count = 0, ret_value;

	c = va_arg(arg, int);

	ret_value = _putchar(c);

	if (ret_value == -1)
		return (-1);

	count++;
	return (count);
}
