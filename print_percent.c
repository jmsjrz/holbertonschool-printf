#include "main.h"

/**
* print_percent - prints the percent '%' character
* @args: A va_list not used but included for compatibility and uniformity
*
* Description: Outputs the '%' character directly. This function is
* designed to handle the '%%' format specifier in a printf-like function,
* effectively printing a single '%' character. The va_list parameter is
* present to maintain a consistent function signature across all handler
* functions, even though it is not utilized here.
*
* Return: The number of characters printed (always 1).
*/
int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
