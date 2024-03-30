# HOLBERTON SCHOOL PRINTF PROJECT

This repository holds the code for a custom implementation of the `printf` function, a foundational project by the students of Holberton School. This custom `printf` mirrors the functionality of the standard C library `printf` function. The project is a collaborative effort between [Charlène SCOMPARIN](https://github.com/ChSPN) and [James JAROSZ](https://github.com/jmsjrz).


## PROJECT OVERVIEW

- **Objective:** To replicate the functionality of the standard `printf` function in C.
- **Compilation Command:** `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
- **Environment:** Ubuntu 20.04 LTS.
- **Coding Style:** Betty style for both coding and documentation.


## UML DIAGRAM OVERVIEW (Unified Modeling Language)
![UML Diagram](https://i.imgur.com/Gn9NAlI.png)


## REQUIREMENTS

- **Editors:** vi, vim, emacs.
- All files must end with a newline.
- The code must adhere to the Betty style and documentation guidelines.
- No global variables allowed.
- A maximum of 5 functions per file.
- Function prototypes should be included in the header file `main.h`.
- All header files must have include guards.
- Do not push any C file containing a `main` function at the root directory of your project.


## AUTHORIZED FUNCTIONS AND MACROS

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)


## USAGE INSTRUCTIONS

To use this custom `_printf` implementation, include the header file `main.h` in your program and compile your code along with the `_printf` source files using the specified compilation command. Example usage is as follows:

```c
#include "main.h"

int main(void) {
    _printf("Welcome to Holberton School Printf project!\n");
    return (0);
}
```
Here is the result of this function:
```
Welcome to Holberton School Printf project!
```


## SPECIFIERS HANDLED BY _PRINTF

| Specifier|  Description|
| -------- | -------- | 
|   %c    | print a single character | 
|   %s    | print a null-terminated string   | 
|   %%    | print a literal '%' character  | 
|   %d | print a decimal number|
|  %i   |print an integer number|


## COMPILATION & TESTING

To compile the program, use this commmand, dont forget to move the main.c from test folder to root: 
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o output
./output
```

Here is the testing result you should get:
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[]
Unsigned:[2147484671]
Unsigned octal:[]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[, ]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[]
Unknown:[r]
```


## MANUAL PAGE UTILISATION

To read the man page for our custom _printf function and learn more about its usage and features, execute the following command in your terminal: `man ./man_3_printf`
This command will open the manual page directly from the current directory, allowing you to explore the syntax, options, and examples provided for the _printf function.


## CONTRIBUTIONS

Contributions, issues, and feature requests are welcome! Feel free to check [issues page](https://github.com/jmsjrz/holbertonschool-printf/issues). If you want to contribute, please fork the repository and use a feature branch. Pull requests are warmly welcome.


## AUTHORS

- [Charlène SCOMPARIN](https://github.com/ChSPN) - Initial work & contributions.
- [James JAROSZ](https://github.com/jmsjrz) - Initial work & contributions.
