#include "main.h"
#include <string.h>

/**
*find_function - find the associated function
*@s: symbol
*Return: pointer to the function
*/

int (*find_function(const char *s))(va_list)
{
	sym_t sps[] = {
			{"c", print_char},
			/*{"s", print_string},*/
			/*{"i", print_int},*/
			/*{"d", print_dec},*/
			{NULL, NULL}
		};

	int i = 0;

	while (sps[i].sym)
	{
		if (strcmp(sps[i].sym, s) == 0)
		{
			return (sps[i].f);
		}
		i++;
	}

	return (NULL);
}
