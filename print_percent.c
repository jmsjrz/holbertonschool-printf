#include "main.h"

/**
 * print_percent - imprime le caractère %
 * Description: imprime le caractère %
 * @format: caractère pourcentage
*/
void print_percent(va_list format)
{
	va_arg(format, char);

	_putchar('%');
}
