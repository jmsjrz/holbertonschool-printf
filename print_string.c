#include "main.h"

/**
* print_string - prints a string
* @args: variable argument list containing the string to print
*
* Description: Extracts and outputs a string from the variable argument list,
* character by character, until the null terminator is encountered. If the
* provided string is NULL, the function will simply return without printing
* anything. This function is intended to serve as a handler for the '%s'
* format specifier in a printf-like function.
*
* Return: The number of characters printed, excluding the null terminator.
*/
int print_string(va_list args)
{
	int length = 0; /* Character count */

	/* Retrieve string from va_list */
	char *s = va_arg(args, char*);

	/* Handle NULL string case */
	if (s != NULL)
	{
		/* Iterate over each character in the string */
		while (*s != '\0')
		{
			_putchar(*s); /* Output current character */
			length++;     /* Increment character count */
			s++;          /* Advance to next character */
		}
	}

	return (length); /* Return total character count */
}
