#include "main.h"

/**
*print_rev - print a string in reverse
*@arg: string
*Return: number of chracaters
*/

int print_rev(va_list arg)
{
	char *str;
	int i, len = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = ")llun(";

	for (i = 0; str[i] != '\0'; i++)
	;

	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		len++;
	}

	return (len);
}
