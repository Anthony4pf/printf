#include "main.h"

/**
*print_integer - print an integer to stdout
*@arg: number to print
*Return: number of digits
*/

int print_integer(va_list arg)
{
	int i, len, power, digit, n, num;
	int count = 0;

	n = va_arg(arg, int);

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			count++;
		}

		num = n;
		len = 0;
		while (num != 0)
		{
			num = num / 10;
			len++;
		}

		power = 1;

		for (i = 1; i <= len - 1; i++)
			power = power * 10;

		for (i = 1; i <= len; i++)
		{
			digit = n / power;
			_putchar('0' + digit);
			count++;
			n -=  digit * power;
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
