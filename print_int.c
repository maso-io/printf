#include "main.h"
/**
 * print_int - function to print integers
 * @n: integer
 *
 * Return: number of bytes printed
 */

void print_int(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_int(n / 10);
	/*
	 * if ((n % 10 < 0) && (n / 10 == 0))
	 *	return (len);
 	 */
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
