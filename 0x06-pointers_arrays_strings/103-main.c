#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	char *n = "123456789243
		45743678235745756784
		7768578564568587687677458
		6734734563
		45645374375675
		6784458";
	char *m = "90347906634706
		972346829145693462
		59634958693246
		597324659762347956349
		265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
		printf("Error\n");
	else
		printf("%s + %s = %s\n", n, m, res);
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
		printf("Error\n");
	else
		printf("%s + %s = %s\n", n, m, res);
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
		printf("Error\n");
	else
		printf("%s + %s = %s\n", n, m, res);
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
		printf("Error\n");
	else
		printf("%s + %s = %s\n", n, m, res);
	return (0);
}