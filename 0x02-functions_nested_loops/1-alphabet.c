#include "main.h"

/**
 * main - using the main function
 *
 * Description: Write a function that prints the alphabet, in lowercas
 * print_alphabet - function to print abc
 *
 * Return: 0
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
