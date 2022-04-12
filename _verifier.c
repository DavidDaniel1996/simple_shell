#include "main.h"

/**
 * _verifier - verifies for edge cases, or prints environment
 * @string: string to be verifed
 * @envp: environment
 * Return: 1 if non match, 0 if always match
 */

int _verifier(char *string, char **envp)
{
	int i;

	if (_strcmp(string, "env\n") == 0)
	{
		_printenv(envp);
		return (0);
	}
	else
	{
		for (i = 0; i < _strlen(string); i++)
		{
			if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
				;
			else
			{
				return (1);
			}
		}
	}
	return (0);
}
