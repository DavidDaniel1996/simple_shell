#include "main.h"

/**
 * _verifier - verifies if string is whitespace, new line or tab
 * @string: string to be verifed
 * Return: 1 if non match, 0 if always match
 */

int _verifier(char *string)
{
	int i;

	for (i = 0; i < _strlen(string); i++)
	{
		if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
			;
		else
		{
			return (1);
		}
	}
	return (0);
}
