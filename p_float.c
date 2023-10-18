#include "main.h"

/**
 * p_float - writes float to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_float(double n)
{
	char *buffer;
	int needed, i;

	needed = snprintf(NULL, 0, "%d", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%f", n);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);
	free(buffer);

	return (needed);
}

