#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>  /* For input and output functions. */
#include <stdlib.h> /* For memory management functions if needed. */
#include <stdarg.h> /* Necessary for variable-length argument lists. */
#include <string.h> /* For string manipulation functions. */
#include <unistd.h> /* For system calls, like write, necessary for _putchar. */

/* Prototype for putchar clone function. */
int _putchar(char c);

/* Prototypes for handling different format specifiers. */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

 /* Prototype that select & executes print function for a specifier. */
int (*get_print_func(char *identifier))(va_list);

/**
* struct format - Struct to map format specifiers to their handling functions.
* @identifier: The format specifier (e.g., "c" for char, "s" for string).
* @ptr_func: Pointer to the function that handles the printing for this format.
*
* Description: This structure is used to associate format specifiers with
* the corresponding function that knows how to handle and print that type of
* data. For example, to handle printing characters and strings, you would
* have format_t entries like {"c", print_char} and {"s", print_string}.
*/
typedef struct format
{
	char *identifier;              /* Format specifier as a string. */
	int (*ptr_func)(va_list args); /* Function pointer for handling. */
} format_t;


#endif /* MAIN_H */
