#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
