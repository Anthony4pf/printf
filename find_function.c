#include "main.h"
#include <string.h>

/**
*find_function - find the associated function for the format specified
*@format: symbol for the format specifier
*Return: NULL or associated function
*/

int (*find_function(const char *format))(va_list)
{
	sym_t sps[] = {
			{"c", print_char},
			{"s", print_string},
			{"b", print_binary},
			{"d", print_integer},
			{"i", print_integer},
			{"u", print_unsigned},
			{"o", print_octal},
			{"x", print_x},
			{"X", print_X},
			{NULL, NULL}
		};

	unsigned int i = 0;

	while (sps[i].sym)
	{
		if (sps[i].sym[0] == (*format))
		{
			return (sps[i].f);
		}

		i++;
	}

	return (NULL);
}
