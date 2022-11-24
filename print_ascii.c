#include "main.h"

/**
*print_ascii - print string except non printable characters
*@arg: string
*Return: number of characters
*/

int print_ascii(va_list arg)
{
	unsigned int value;
	int i;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			value = str[i];
			_putchar('\\');
			_putchar('x');
			print_hex(value, 1);
		}
		else
			_putchar(str[i]);

		i++;
	}

	return (i);
}
