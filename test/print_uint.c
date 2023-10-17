#include "main.h"

/**
 * print_uint - prints unsinged int to stdout
 * @n: unsigned int to print
 */

void print_uint(u_int n)
{
	u_int d;

	if (n / 10)
		print_uint(n / 10);
	d = (n % 10) + '0';
	write(1, &d, 1);
}
