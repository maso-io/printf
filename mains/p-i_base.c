#include "main.h"


int p_iint(int n)
{
	int count;

	count = 0;
	if (n == '0' && n[1] == 'x')
		count += p_hex(n);
	else if (n[0] == '0' && n[1] == 'c')
		count += p_oct(n);
	else
		count += p_int(n);

	return (count);
}
