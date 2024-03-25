#include "main.h"

/**
 * print_string - imprime la chaine de caractères
 * Description: imprime la chaine de caractères
 * @format: chaine de caractères à afficher
*/
void print_string(va_list format)
{
	char *s = va_arg(format, char*);

	if (s != NULL)
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
	}
}
