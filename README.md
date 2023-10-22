#### _printf()
`_printf()` is a custom-made function that works like the regular C function printf(), but only with format specifiers %d, %c, %s, %u, and %p. It produces output according to a format that is described below and writes its output to the stdout, the standard output stream.
Function Definition

##### c definition:<br>
`int _printf(const char *format, ...);` <br>

The function takes in a string format and a variable number of arguments, and
returns the count of printed characters when the function is successful and -1
when the function fails.<br>

##### Format Specifiers
The available conversion specifiers for `_printf()` are:

    %c: Prints a single character.
    %s: Prints a string of characters.
    %d or %i: Prints integers.
    %u: Prints unsigned integers.
    %p: Prints a pointer address.

##### Makefile
The repository includes a Makefile with the following rules:

    make printf: Compiles the _printf() function.
    make clean: Removes the executable.

##### Usage
To use `_printf()` in your C program, include the header file main.h and call
the function with the desired format and arguments. Here's an example:<br>

    #include "main.h"

    int main(void)
    {
        int n;

        n = _printf("Hello, %s!\n", "world");
        _printf("The number of characters printed is: %d\n", n);

        return (0);
    }

This will output:<br>

    Hello, world!
    The number of characters printed is: 14
