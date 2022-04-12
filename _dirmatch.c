#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *_dirmatch(char* path, char* input)
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
