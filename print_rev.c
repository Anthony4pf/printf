#include "main.h"

/**
*print_rev - print a string in reverse
*@arg: string
*Return: number of chracaters
*/

int print_rev(va_list arg)
{
	int i, j,len = 0;
	char *str;

	str = va_arg(arg, char *);

	for (i = 0; str[i] != '\0'; i++)
	;

	for (j = i; j >= 0; j--)
	{
		_putchar(str[j]);
		len++;
	}

	return (len);
}
