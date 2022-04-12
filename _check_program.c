#include "main.h"

/**
 * _check_program - checks if program is valid before passing to execve
 * @program: program to validate
 * Return: 0 if valid, -1 otherwise
 */

int _check_program(char *program)
{
	struct stat status;

	if (stat(program, &status) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
