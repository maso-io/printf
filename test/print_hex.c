#include "main.h"

/**
 * p_hex - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_hex(int n)
{
	int ret;
	char * tmp;

	tmp = malloc(sizeof(char) * 20);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%x", n);
	ret = write(1, tmp, sizeof(tmp));
	free(tmp);

	return (ret);
}

/**
 * p_HEX - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_HEX(int n)
{
	int ret;
	char * tmp;

	tmp = malloc(sizeof(char) * 20);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%X", n);
	ret = write(1, tmp, sizeof(tmp));
	free(tmp);

	return (ret);
}
