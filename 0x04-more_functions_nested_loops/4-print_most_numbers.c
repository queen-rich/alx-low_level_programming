#include "main.h"

/**
 * print_most_number - print the numbers since 0 up to 9
 * Description: prints the number excluding 2 and 4
 * Return: the number since 0 up to 9
 */

vold print_most_number(void)
{
	int (x = 0);
		for (; x <= 9; x++)
		{
		if (x == 2 || x == 4)
		{
		continue;
		}
		else
		{
		_putchar(x + '0');
		}
		}
		_putchar('/n');
}
