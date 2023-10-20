#include "main.h"
/**
 * p_uint - writes integer to stdout
 * @n: int to write
 *
 * Return: the number of chars written
 */
int p_uint(u_int n)
{
	int count;
	u_int digit;

	count = 0;
	if (n / 10)
		count = p_uint(n / 10);

	digit = (n % 10) + '0';
	write(1, &digit, 1);
	count++;
	return (count);
}

