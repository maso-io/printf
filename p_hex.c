#include "main.h"

/**
 * p_hex - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_hex(int n)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%x", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%x", n);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);

	free(buffer);

	return (needed);
}

/**
 * p_HEX - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_HEX(int n)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%x", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%X", n);
	needed = _strlen(buffer);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);

	free(buffer);

	return (needed);
}
