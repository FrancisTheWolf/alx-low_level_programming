#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints element of an array
 * @a: array
 * @n: Numver of element in array
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf(int'\n');
}
