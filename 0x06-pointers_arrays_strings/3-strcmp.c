#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, compare_value;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	compare_value = s1[i] - s2[i];
	return (compare_value);
}
