#include "main.h"
/**
 * _islower  - Prints alphabet in lowercase
 * 0
 *
 * @c: The char in ascii code
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
