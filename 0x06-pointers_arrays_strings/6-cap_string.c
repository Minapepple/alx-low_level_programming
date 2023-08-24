#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int string_c;

/* scan through string */
	string_c = 0;
	while (s[string_c] != '\0')
	{/* if next character after c is char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[string_c] == ' ' || s[string_c] == '\t' || s[string_c] == '\n'
			|| s[string_c] == ',' || s[string_c] == ':' || s[string_c] == '.'
			|| s[string_c] == '.' || s[string_c] == '!' || s[string_c] == '?'
			|| s[string_c] == '"' || s[string_c] == '(' || s[string_c] == ')'
			|| s[string_c] == '{' || s[string_c] == '}')
		{
			if (s[string_c + 1] >= 97 && s[string_c + 1] <= 122)
			{
				s[string_c + 1] = s[string_c + 1] - 32;
			}
		}
		string_c++;
	}
	return (s);
}
