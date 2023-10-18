#include "main.h"
/**
 * p_int - writes int to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_int(int n)
{
	int i;
	char *buffer;
	int needed;

	needed = snprintf(NULL, 0, "%d", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%d", n);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);
	free(buffer);

	return (needed);
}

