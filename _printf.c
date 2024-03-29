#include "main.h"

/**
* _printf - Custom implementation of the printf function.
* @format: The format string that specifies the format to output.
* @...: A variable number of arguments to be formatted and printed.
*
* Description: This function mimics the standard 'printf' behavior, printing
* the formatted output to the standard output (stdout). It supports format
* specifiers for printing characters (%c), strings (%s), percentages (%%),
* and integers (%d, %i). The function iterates over the format string and
* processes each character and format specifier accordingly. When a format
* specifier is encountered, it delegates the processing to the corresponding
* function pointed to within an array of structs.
*
* Return: The total number of characters printed, excluding the null byte.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0; /* Counter for the number of characters printed */
	int index; /* Index for iterating through the format specifier array */

	/* Array mapping format specifiers to their respective functions */
	format_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_start(args, format); /* Initializing the argument list */
	while (*format)
	{
		if (*format == '%') /* Check for format specifier */
		{
			format++; /* Move to the format specifier character */
			index = 0; /* Reset index for each format specifier */
			while (prints[index].identifier)
			{
				if (*format == *(prints[index].identifier))
				{
					count += prints[index].ptr_func(args); /* Call handler */
					break; /* Exit the loop once the handler is called */
				}
				index++;
			}
		}
		else
		{
			count += _putchar(*format); /* Print non-format characters */
		}
		format++; /* Move to the next character in the format string */
	}
	va_end(args); /* Clean up the argument list */
	return (count); /* Return the count of printed characters */
}
