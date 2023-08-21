#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
