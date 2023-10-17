#include "main.h"
/**
 * print_string - writes string arg to stdout
 * @str: string to write
 *
 * Return: number of bytes printed
 */

int print_string(char *str, int len)
{
	if (*str == '\0')
		return (len);
	_putchar(*str);
	return (print_string(++str, ++len));
}
