#include "main.h"

/**
* _printf - function that produces output according to a format.
*@format: format (char, string, int, decimal)
*@...: variable argument
*Return: number of characters
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);

		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			count += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(ap);
	return (count);
}
