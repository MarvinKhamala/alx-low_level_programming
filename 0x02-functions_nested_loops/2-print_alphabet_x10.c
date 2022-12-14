#include "main.h"
/**
 * print_alphabet_x10 - prints 10x lowercase alphabet followed by new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0, i <= 9; i++;)
	{
		for (ch = 'a'; ch <= 'z'; ch++);
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
