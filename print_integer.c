#include "main.h"

/**
* print_integer - Prints a integer to the standard output.
* @args: List containing the integer to be printed.
*
* Description: Takes a va_list argument, extracts the integer, and prints
* it to the standard output. Handles negative numbers by printing a '-' sign
* before the number. Counts and returns the number of characters printed.
*
* Return: The number of characters printed.
*/
int print_integer(va_list args)
{
	long int num = va_arg(args, int); /* The integer to print */
	long int numAbs = 0; /* Absolute value of the integer */
	long int tempNum = numAbs; /* Temporary variable for processing */
	long int digitPlace = 1; /* Position of digit (tens, hundreds, etc.) */
	int length = 0; /* Number of characters printed */

	if (num < 0)
	{
		numAbs = -num; /* Convert to absolute value if negative */
		_putchar('-'); /* Print the negative sign */
		length++;
	}
	else
	{
		numAbs = num; /* Use the number directly if not negative */
	}

	tempNum = numAbs;
	while (tempNum > 9) /* Find the highest digit place */
	{
		tempNum /= 10;
		digitPlace *= 10;
	}

	while (digitPlace >= 1) /* Print each digit */
	{
		_putchar((int)((numAbs / digitPlace) % 10) + '0'); /* Digit to char */
		digitPlace /= 10;
		length++; /* Increment count of printed characters */
	}

	return (length); /* Return the count of characters printed */
}
