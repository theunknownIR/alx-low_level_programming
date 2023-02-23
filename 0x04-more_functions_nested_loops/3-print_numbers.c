#include "main.h"
/**
*print_numbers - function that counts up from 0 to 9
*@ i: int
*Return: returns result
*/

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
