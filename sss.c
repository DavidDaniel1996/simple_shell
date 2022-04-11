#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[], char *envp[])
{
	char **command, *tok, *lineptr = NULL, *path = NULL, *string = NULL;
	size_t n;
	int status, count = 0;

	while (1)
	{
		write(1,"$ ", 2);
		if (getline(&lineptr, &n, stdin) == -1)
			break;
		if(_strcmp(lineptr, "exit\n") == 0)
		{
			free(lineptr);
			//lineptr = NULL;
			exit(status);
		}
		else
		{
			path = _getpath(envp, "PATH");
			command = _tokenizer(lineptr, " \n");
			string = _dirmatch(path, command[0]);
			_exec(string, command, envp);	
		}
	}
	_putchar('\n');
	_free_double(command);
	free(lineptr);
	//lineptr = NULL;
	exit(status);
}
