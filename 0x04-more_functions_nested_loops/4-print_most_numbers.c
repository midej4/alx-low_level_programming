#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers,
 * from 0 to 9 skip 2 and 4
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
