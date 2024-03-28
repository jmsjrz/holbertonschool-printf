#include "main.h"

/**
* get_print_func - Retrieves a function pointer for handling a specific format.
* @identifier: A string representing the format identifier.
*
* Description: Iterates over an array of format_t structs to find a matching
* format handler for the given identifier. The function compares only the
* first character of the identifier to find a match.
*
* Return: Pointer to the matched print function, or NULL if no match is found.
*/
int (*get_print_func(const char *identifier))(va_list)
{
	int index;

	format_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
	};

	for (index = 0; index < 5; index++)
	{
		if (prints[index].identifier[0] == identifier[0])
		{
			return (prints[index].ptr_func);
		}
	}

	return (NULL);
}
