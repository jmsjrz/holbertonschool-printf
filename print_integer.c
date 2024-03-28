#include "main.h"

/**
* print_integer - Prints an integer from a va_list.
* @args: List containing integers.
*
* This function attempts to print an integer extracted from a variable
* arguments list. It supports printing negative numbers and recursively
* handles multiple digits. However, the recursion does not function as
* expected for numbers with more than one digit due to a flaw in handling
* the va_list, which could lead to undefined behavior or incorrect output.
*
* Return: The count of characters printed.
*/
int print_integer(va_list args)
{
	int num = va_arg(args, int); /* Extract next integer */

	int count = 0; /* Initialize character count */

	if (num < 0) /* Check for negative numbers */
	{
		_putchar('-'); /* Print negative sign */
		count++;
		num = -num; /* Convert num to positive */
	}
	if (num / 10) /* Check if num has more than one digit */
	{
		count += print_integer(args); /* Incorrect: should not reuse args directly */
	}
	_putchar((num % 10) + '0'); /* Print last digit */
	return (count + 1); /* Return total character count */
}
