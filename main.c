#include "main.h"
#define unused __attribute__((unused))

/**
 * main - runs a simple version of shell
 * @argc: unused, argument count
 * @argv: unused, argument vector
 * @envp: holds environment
 * Return: 0 if succesful
 */

int main(unused int argc, unused char *argv[], char *envp[])
{
	char **command, *lineptr = NULL, *path = NULL, *string = NULL;
	size_t n;

	while (1)
	{
		write(1, "$ ", 2);
		if (getline(&lineptr, &n, stdin) == -1)
			break;
		if (_strcmp(lineptr, "exit\n") == 0)
		{
			free(lineptr);
			exit(0);
		}
		else if (_strcmp(lineptr, "env\n") == 0)
		{
			_printenv(envp);
			free(lineptr);
			lineptr = NULL;
			continue;
		}
		else
		{
			path = _getpath(envp, "PATH");
			command = _tokenizer(lineptr, " \n");
			string = _dirmatch(path, command[0]);
			free(path);
			path = NULL;
			free(lineptr);
			lineptr = NULL;
			_exec(string, command, envp);
		}
	}
	return (0);
}
