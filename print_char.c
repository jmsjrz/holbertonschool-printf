#include "main.h"

/**
* print_char - prints a character
* @args: variable argument list containing the character to print
*
* Description: Extracts and prints a character from the variable
* argument list. This function is intended to serve as a handler
* for the '%c' format specifier in a printf-like function.
*
* Return: The number of characters printed (always 1).
*/
int print_char(va_list args)
{
	/* Extract the character from the list, interpreting it as an integer. */
	char c = va_arg(args, int);

	/* Output the character. */
	_putchar(c);

	/* Return the count of characters printed. */
	return (1);
}
