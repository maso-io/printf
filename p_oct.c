#include "main.h"

/**
 * p_oct - writes octa-decimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_oct(int n)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%o", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%o", n);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);
	free(buffer);

	return (needed);
}

