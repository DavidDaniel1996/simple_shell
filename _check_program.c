#include "main.h"

int _check_program(char *string)
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
