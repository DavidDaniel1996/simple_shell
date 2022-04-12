#include "main.h"

/**
 * _exec - executes valid command
 * @string: string containing valid command
 * @command: double pointer containing command arguments
 * @envp: environment
 * Return: 0 if succesful
 */

int _exec(char *string, char **command, char **envp)
{
	pid_t pid;
	int status;


	pid = fork();
	if (pid == 0)
	{
		if (execve(string, command, envp))
		{
			_free_double(command);
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	if (pid > 0)
	{
		_free_double(command);
		wait(&status);
	}
	return (0);
}
