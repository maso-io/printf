#include "main.h"

/**
 * _printf - custom print function
 * @format: string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int flag;
	int count, i;
	va_list ap;

	i = 0;
	flag = 1;
	count = 0;
	if (format)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%' && ((format[i + 1] >= 'a' && format[i + 1] <=
					'z') || (format[i + 1] >= 'A' && format[i + 1] <= 'Z')))
			{
				count += link_data(format[i + 1], ap);
				i += 1;
				flag = 0;

			}
			if (format && (format[i] == format[i + 1]) && (format[i] == '%'))
			{
				flag = 0;
				_putchar(format[i]);
			       	i++;
				count++;
			}
			if (format && format[i] != '%' && flag)
				_putchar(format[i]);
			if (flag)
			{
				count++;
			}
			i++;
			flag = 1;
		}
		va_end(ap);
	}
	else
	{
		return (-1);
	}

	return (count);
}
