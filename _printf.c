#include "main.h"

int _printf(const char *format, ...)
{
	/* declaration des variables de fonctionnement */
	int length = 0;
	int flag = 0;
	va_list args;
	int (*ptr_func)(va_list args);

	va_start(args, format);

	/* Lecture de la chaine de caracteres */
	while (*format != '\0')
	{
		if (flag > 1)
		{
			/* Remise à zero de la dectection */
			flag = 0;

			/* Recuperation de la fonction de formatage */
			ptr_func = get_print_func(format);

			/* Detection du formatage non pris en charge */
			if (ptr_func != NULL)
			{
				/* Execution du formatage */
				length += ptr_func(args);
			}
			else
			{
				/* Affichage du format non reconnu */
				_putchar('%');
				_putchar(*format);
				length += 2;
			}
		}
		else if (*format != '%')
		{
			/* Affichage normal du caractere */
			_putchar(*format);

			/* Incrementation du nombre de caractere */
			length++;
		}
		else
		{
			/* Detection d'un formatage */
			flag = 1;
		}
		
		/* Incrementation de l'adresse du pointeur de caractere */
		format++;
	}

	va_end(args);
	return (length);
}
