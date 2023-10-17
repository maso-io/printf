#include "main.h"

/**
 * print_float - writes floats to the stdout
 * @
 * @
 *
 * Return: number of bytes printed
 */

void print_float(double n)
{
	double digit;

	if (n < 0)
	{
		_putchar('-');
		n *= -1.0;
	}
	else
	{
		n *= 1.0;
	}
	if (n / 10)
		print_int(n / 10);
	digit = ((int)n % 10) + '0';
	write(1, &digit, 1);
}
