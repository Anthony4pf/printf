#include "main.h"

/**
*print_dec - print a decimal number to stdout
*@arg: number to print
*Return: number of digits
*/

int print_dec(va_list arg)
{
	int n;
	int len;

	n = va_arg(arg, int);

	len = print_number(n);

	return (len);
}

/**
*print_number - print number
*@num: number
*Return: count
*/

int print_number(int num)
{
	static int count = 1;

	if (num < 0)
	{
		num = -num;
		putchar('-');
	}
	if (num > 9)
	{
		count++;
		print_number(num / 10);
	}

	putchar('0' + (num % 10));

	return (count);
}
