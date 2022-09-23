#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: first string who concat
 * @src: second string who concat
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
