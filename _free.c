#include "main.h"

/**
 * _free_double - frees a double pointer and sets it to NULL
 * @token: double pointer to free
 * Return: 0 if succesful
 */

int _free_double(char **token)
{
	int i;

	if (token != NULL)
	{
		i = 0;
		while (token[i] != NULL)
		{
			i++;
		}
		free(token[i + 1]);
		token[i + 1] = NULL;
		free(token);
		token = NULL;
	}
	return (0);
}
