#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%d", 2);
	printf("\n---- ---- ---- ----\n");
	printf("%d\n", len);
	printf("\n---- ---- ---- ----\n");
	len2 = printf("%d", 2);
	printf("\n---- ---- ---- ----\n");
	printf("%d\n", len2);
	printf("\n---- ---- ---- ----\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
