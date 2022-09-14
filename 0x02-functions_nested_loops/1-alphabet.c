#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 * description - function to print alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	int r;

	for (r = 97; r <= 122; r++)

	{
		_putchar(r);
	}
	_putchar('\n');
}
