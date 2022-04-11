#include "main.h"

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
			//free(string);
			//string = NULL;
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
/*
int main()
{
	char *command = "/bin/ls"
	char **test;

	test[0] = a;
	test[1] = -l;

	_exec(command, test, NULL)

	return (0);
}*/
