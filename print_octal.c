#include "main.h"

/**
*print_octal - print a number in base 8 to stdout
*@arg: number to print
*Return: number of digits
*/

int print_octal(va_list arg)
{
	unsigned int len, n, digit, num, i, power;

	int count = 0;

	n = va_arg(arg, unsigned int);

	if (n != 0)
	{
		num = n;
		len = 0;
	while (num != 0)
	{
		num = num / 8;
		len++;
	}

	power = 1;

	for (i = 1; i <= len - 1; i++)
		power = power * 8;

	for (i = 1; i <= len; i++)
	{
		digit = n / power;
		_putchar('0' + digit);
		count++;
		n = n - power * digit;
		power = power / 8;
	}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
