#include "main.h"

/**
 * print_string - imprime la chaine de caractères
 * Description: imprime la chaine de caractères
 * @format: chaine de caractères à afficher
 * Return: nombre de caractères
*/
int print_string(va_list format)
{
	int length = 0;
	char *s = va_arg(format, char*);

	if (s != NULL)
	{
		while (*s != '\0')
		{
			_putchar(*s);
			length++;
			s++;
		}
	}

	return (length);
}
