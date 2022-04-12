#include "main.h"
#include <stdio.h>

/**
 * _getpath - goes to environment and extracts the path
 * @envp: contains environment
 * @name: name of the variable to extract (path)
 * Return: path if succesful, NULL if failure
 */

char *_getpath(char *envp[], char *name)
{
	char **buffer, *path;
	int i;

	for (i = 0; envp[i] != NULL; i++)
	{
		buffer = _tokenizer(envp[i], "=");
		if (_strcmp(buffer[0], name) == 0)
		{
			path = malloc(sizeof(char) * _strlen(buffer[1]) + 1);
			_strcpy(path, buffer[1]);
			_free_double(buffer);
			return (path);
		}
		_free_double(buffer);
	}
	return (NULL);
}

