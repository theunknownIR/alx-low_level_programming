#include <unistd.h>

/**
 * print_string - prints a string to the console
 * @str: the input string to print
 *
 * Return: none
 */
void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
		_putchar(str[i]);
		i++;
		}
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";

	print_string(str);
	return (0);
}
