#include "main.h"

/**
*print_string - print string to stdout
*@arg: argument
*Return: printed string
*/

int print_string(va_list arg)
{
	char *str;
	unsigned int i;

	str = va_arg(arg, char *);

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
