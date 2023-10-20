#include "main.h"
/**
 * p_string - writes string to stdout
 * @s: string to write
 *
 * Return: number of chars written
 */

int p_string(char *s)
{
	int len;

	len = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));

	while (s[len] != '\0')
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}

