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
	if (n == 0)
	{
		digit = (n % 10) + '0';
		write(1, &digit, 1);
		return (1);
	}
	if (n >= INT_MIN && n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
			count = p_uint((UINT_MAX / 2) + 1);
		else
			count = p_int(n * -1);
	}
	if ((n / 10) && (n >= 0 && n <= INT_MAX))
		count = p_int(n / 10);

	if (n >= 0 && n <= INT_MAX)
	{
		digit = (n % 10) + '0';
		write(1, &digit, 1);
		/*	printf("\nprintf_char: %d\n", digit);*/
	}
	count++;
	return (count);
}
