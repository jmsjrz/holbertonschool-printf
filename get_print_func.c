#include "main.h"

/**
 * get_print_func - function who print
 * Description: get_print_func
 * @identifier: format of the value
 * Return: pointer of print function
*/
int (*get_print_func(const char *identifier))(va_list)
{
	int i;
	format_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
	};

	for (i = 0 ; i < 2 ; i++)
	{
		if (prints[i].identifier == identifier)
		{
			return (prints[i].ptr_func);
		}
	}

	return (NULL);
}
