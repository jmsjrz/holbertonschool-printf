#include "main.h"

int _printf(const char *format, ...)
{
	/* declaration des variables de fonctionnement */
	int length = 0;
	int flag = 0;
	va_list args;
	int (*ptr_func)(va_list args);

	va_start(args, format);

	while (*format != '\0')
	{
		/* Detection du caractere pourcent */
		if (*format != '%')
		{
			/* Detection du formatage */
			if (flag > 0)
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
					
					/* Incrementation de l'adresse du pointeur de caractere */
					format++;
					continue;
				}
				else
				{
					/* Affichage du pourcentage */
					length += print_percent();
				}
			}
			
			/* Affichage normal du caractere */
			_putchar(*format);

			/* Incrementation du nombre de caractere */
			length++;
		}
		else if (flag == 0)
		{
			/* Detection d'un formatage */
			flag = 1;
		}
		else
		{
			/* Detection d'un double pourcent */
			length += print_percent();
		}

		/* Incrementation de l'adresse du pointeur de caractere */
		format++;
	}


	va_end(arg);
	return (length);
}
