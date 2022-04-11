#include "main.h"

int _free_double(char **token)
{
	if (token != NULL)
	{
		free(token[0]);
		token[0] = NULL;
		free(token);
		token = NULL;
	}
	return (0);
}
