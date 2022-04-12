#include "main.h"

/**
 * _dirmatch - matches command with correct directory in path
 * @path: string containing the path
 * @input: command to match with path
 * Return: matched command if found, input if no match
 */

char *_dirmatch(char *path, char *input)
{
	char **dir;
	char *command, *temp, storage[300], slash[77] = "/";
	int i;
	struct stat info;

	dir = _tokenizer(path, ":");
	if (input[0] != '/')
	{
		temp = _strcat(slash, input);
	}

	for (i = 0; dir[i] != NULL; i++)
	{
		_strcpy(storage, dir[i]);
		command = _strcat(storage, temp);
		if (stat(command, &info) == 0)
		{
			_free_double(dir);
			return (command);
		}
	}
	_free_double(dir);
	return (input);
}
