#include "main.h"

/**
 * print _number - print the number since 0 up to 9
 * Return: the numbers since 0 up to 9
 */

vold print_number(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('/n');
}

