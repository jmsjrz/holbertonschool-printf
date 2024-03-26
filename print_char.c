#include "main.h"

/**
 * print_char - imprime le caractère
 * Description: imprime le caractère
 * @format: caractère à afficher
 * Return: nombre de caractères
*/
int print_char(va_list format)
{
	/* Récupération de la valeur actuelle de la liste en entier. */
	char c = va_arg(format, int);

	/* Affichage de la valeur. */
	_putchar(c);

	/* Retourne le nombre de caracteres */
	return (1);
}
