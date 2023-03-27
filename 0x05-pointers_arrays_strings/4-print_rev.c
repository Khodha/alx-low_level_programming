#include "main.h"
/**
 * print_rev - prints strip in revers
 * @s: funtion parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
