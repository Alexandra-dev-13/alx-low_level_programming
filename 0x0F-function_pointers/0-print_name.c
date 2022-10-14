#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - A function that prints the name
 * @name: the name that prints
 * @f: pointer to a function that prints the name
 *
 * Return: a pointer to the name
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
