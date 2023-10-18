#include "main.h"

/**
 * p_pointer - writes pointer to stdout
 * @p: value to print
 *
 * Return: number of bytes printed
 */

int p_pointer(void *p)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%p", p);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%p", p);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);
	free(buffer);

	return (needed);
}
