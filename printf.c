#include "main.h"

/**
 * _printf - custom print function
 * @format: string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int flag, count, i, c, len_f;
	va_list ap;
	char *ch;

	i = 0;
	flag = 1;
	count = 0;
	ch = "+# !'$&()*-/;:<>=?[{}]~_@`|";

	if (format == NULL)
	{
		return (-1);
	}

	for (c = 0; format[c] != '\0'; c++)
	{
		len_f++;
	}

	if (format && (format[i] != '%' || len_f != 1))
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			int j, fmtsp_flag;

			fmtsp_flag = 0;

			for (j = 0; ch[j] != '\0'; j++)
			{
				if (format[i + 1] == ch[j])
					fmtsp_flag = 1;
			}

			if (format[i] == '%' && ((fmtsp_flag == 1) || (format[i + 1] >= 'a' && format[i + 1] <= 'z') || (format[i + 1] >= 'A' && format[i + 1] <= 'Z')))
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
