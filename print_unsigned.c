#include "main.h"

/**
*print_unsigned - print an unsigned integer to the stdout
*@arg: number to print
*Return: number of digits
*/

int print_unsigned(va_list arg)
{
	unsigned int i, digit, len, num, n, power;
	int count = 0;

	n = va_arg(arg, unsigned int);

	if (n != 0)
	{
		num = n;
		len = 0;

		while (num != 0)
		{
			num = num / 10;
			len++;
		}

		power = 1;

		for (i = 1; i <= len - 1; i++)
			power *= 10;

		for (i = 1; i <= len; i++)
		{
			digit = n / power;
			_putchar('0' + digit);
			count++;
			n = n - power * digit;
			power = power / 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (count);
}
