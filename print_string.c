#include "main.h"

/**
 * print_string - imprime la chaine de caractères
 * Description: imprime la chaine de caractères
 * @format: chaine de caractères à afficher
 * Return: nombre de caractères
*/
int print_string(va_list format)
{
	/* Nombre de caracteres */
	int length = 0;

	/* Récupération de la valeur actuelle de la liste en pointeur de caracteres. */
	char *s = va_arg(format, char*);

	/* Gestion du pointeur null */
	if (s != NULL)
	{
		/* Boucle jusqu'au caractere de fin */
		while (*s != '\0')
		{
			/* Affiche la valeur du pointeur actuelle. */
			_putchar(*s);

			/* Incremente le nombre de caractere */
			length++;

			/* Incremente l'adresse du pointeur */
			s++;
		}
	}

	return (length);
}
