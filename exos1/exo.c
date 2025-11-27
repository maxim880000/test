#include <stdio.h>

/**
 * main - affiche un texte
 *
 * Return: always 0
 */
 int main (void)
 {
	int i = 0;

	while (i < 10)
		i++;
	{
		putchar ('0' + i);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');

	return (0);
 }