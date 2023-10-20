#include "main.h"
/**
 * p_int - writes integer to stdout
 * @n: int to write
 *
 * Return: the number of chars written
 */
int p_int(int n)
{
	int count;
	int digit;

	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		count = p_int(n / 10);

	digit = (n % 10) + '0';
	write(1, &digit, 1);
	count++;
	return (count);
}

