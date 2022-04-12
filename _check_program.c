#include "main.h"

/**
 * _check_program- cheack if a program exist in PATH
 * @program: progrma name
 * Return: succes
 */

int _check_program(char *program)
{
	struct stat status;

	if (stat(string, &status) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
