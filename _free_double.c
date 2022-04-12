#include "main.h"

/**
 * _free_double - frees a double pointer and sets it to NULL
 * @token: double pointer to free
 * Return: 0 if succesful
 */

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
