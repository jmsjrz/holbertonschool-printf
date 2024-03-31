#include "main.h"

/**
* _printf - Custom implementation of the printf function.
* @format: format string that specifies the output format.
* @...: variable number of arguments to format and print.
*
* Description: Mimics the standard 'printf' function, printing formatted output
* to stdout. Supports %c (characters), %s (strings), %% (percent sign), %d and
* %i (integers). Iterates over the format string, handling each character and
* format specifier by delegating to specific functions.
*
* Return: Total number of printed characters, excluding the null byte.
*/
int _printf(const char *format, ...)
{
	va_list args; /* Initializes a variable argument list */
	int index = 0, count = 0;

	int (*func)(va_list) = NULL; /* Pointer to function for handling specifiers */

	va_start(args, format); /* Start iterating arguments list */

	if (!format) /* Validate format string presence */
		return (-1);

	while (format[index]) /* Iterate through the format string */
	{
		if (format[index] != '%') /* Print regular characters */
		{
			_putchar(format[index++]);
			count++;
			continue;
		}
		if (!format[++index]) /* Handle incomplete specifier at end */
			return (-1);
		func = get_print_func(&format[index]); /* Get func for current specifier */
		if (func) /* If valid specifier, use function to print */
			count += func(args);
		else /* Handle invalid specifier */
		{
			_putchar('%');
			if (format[index] != '%') /* Print current char if not percent */
				_putchar(format[index]);
			else
				count--; /* Adjust count for escaped percent */
			count += 2;
		}
		index++; /* Move to next character in format string */
	}
	va_end(args);
	return (count);
}
