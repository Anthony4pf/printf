#include "main.h"

/**
*print_binary - print a decimal number to stdout
*@arg: number to print
*Return: number of digits
*/

int print_binary(va_list arg)
{
	unsigned int len, power, i, digit, n, num;
	int count = 0;

	n = va_arg(arg, unsigned int);

	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num = num / 2;
			len++;
		}

		power = 1;

		for (i = 1; i <= len - 1; i++)
			power = power * 2;

		for (i = 1; i <= len; i++)
		{
			digit = n / power;
			_putchar('0' + digit);
			count++;
			n = n - digit * power;
			power = power / 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (count);
}
