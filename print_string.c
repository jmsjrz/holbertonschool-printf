#include "main.h"

/**
* print_string - prints a string
* @args: variable argument list containing the string to print
*
* Description: Extracts and outputs a string from the variable argument list,
* character by character, until the null terminator is encountered. If the
* provided string is NULL, the function will print "(null)" instead. This
* approach avoids recursive calls to _printf, ensuring accurate character
* counting and adherence to expected behavior for printing NULL strings.
* This function is intended to serve as a handler for the '%s'
* format specifier in a printf-like function.
*
* Return: The number of characters printed, excluding the null terminator.
*/
int print_string(va_list args)
{
	int count = 0; /* Character count */

	char *string = va_arg(args, char*);

	char *null_string = "(null)";

	if (string != NULL)
	{
		/* Iterate over each character in the string */
		while (*string != '\0')
		{
			_putchar(*string); /* Output current character */
			count++;           /* Increment character count */
			string++;          /* Advance to next character */
		}
	}
	else
	{
		/* Directly print "(null)" for NULL strings */
		while (*null_string != '\0')
		{
			_putchar(*null_string++); /* Output current character */
			count++;                  /* Increment character count */
		}
	}

	return (count); /* Return total character count */
}
