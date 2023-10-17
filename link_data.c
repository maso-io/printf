#include "main.h"
/**
 * link_data - sends data to be printed
 * @c: character to check
 * @ap: argument pointer
 *
 * Return: number of byte printed
 */

int link_data(char c, va_list ap)
{
	int count;

	count = 0;
	switch (c)
	{
	case 'd':
		print_int(va_arg(ap, int));
		count++;
		break;
	case 's':
		count += print_string(va_arg(ap, char *), 0);
		break;
	case 'c':
		count += _putchar(va_arg(ap, int));
		break;
	case 'f':
		print_float(va_arg(ap, double));
		count++;
		break;
	case 'u':
		print_uint(va_arg(ap, unsigned int));
		count++;
		break;
	case 'i':
		print_uint(va_arg(ap, unsigned int));
		break;
	default:
		break;
	}

	return (count);
}

