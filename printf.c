#include "main.h"

/* returns char after specifier */
int handle_string(const char *fmt, int ix);

/**
 * _printf - custom print function
 * @format: string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int flag, count, i, len_f;
	va_list ap;

	i = 0;
	flag = 1;
	count = 0;

	if (format == NULL)
		return (-1);

	for (len_f = 0; format[len_f] != '\0'; len_f++)
		continue;

	if (format[i] != '%' || len_f != 1)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			int fmtsp_flag;

			fmtsp_flag = handle_string(format, i + 1);

			if ((format[i] == '%') && (fmtsp_flag == 1))
			{
				count += link_data(format[i + 1], ap);
				i += 1;
				flag = 0;

			}
			if ((format[i] == format[i + 1]) && (format[i] == '%'))
			{
				flag = 0;
				_putchar(format[i]);
				i++;
				count++;
			}
			if (format[i] != '%' && flag)
				_putchar(format[i]);
			if (flag)
				count++;
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

/**
 * handle_string - checks for valid character
 * @fmt: A pointer to an array of chars
 * @ix: tract the character index
 *
 * Return: 1 valid char or 0 invalid char
 */

int handle_string(const char *fmt, int ix)
{
	char *alph, *sp_chr;
	int j;

	alph = "abcdefghijklmnopqrstuxwxyzABCDEFGHIJKlMNOPQRSTUVWXYXZ";
	sp_chr = "+# !'$&()*-/;:<>=?[{}]~_@`|";

	for (j = 0; alph[j] != '\0'; j++)
		if (fmt[ix] == alph[j])
			return (1);
	for (j = 0; sp_chr[j] != '\0'; j++)
		if (fmt[ix] == sp_chr[j])
			return (1);

	return (0);
}
