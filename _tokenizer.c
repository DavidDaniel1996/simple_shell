#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char **_tokenizer(char *string, char *delim)
{
	char **tokens;
	char *store;
	int i = 0;

	store = malloc(sizeof(char) * strlen(string) + 1);
	if (store == NULL)
	{
		return (NULL);
	}
	store = _strcpy(store, string);
	tokens = malloc(sizeof(tokens));
	if (tokens == NULL)
	{
		return (NULL);
	}
	tokens[i] = strtok(store, delim);
	while (tokens [i] != NULL)
	{
		i++;
		tokens = realloc(tokens, (i + 1) * sizeof(tokens));
		if (tokens == NULL)
		{
			_free_double(tokens);
			return (NULL);
		}
		tokens[i] = strtok(NULL, delim);
	}	
	return (tokens);
}
/*
int main()
{
	char *string = "ls";
	char **buf;
	int i;

	buf = _tokenizer(string, " ");
	for (i = 0; buf[i] != NULL; i++)
		printf("%s\n", buf[i]);

	_free_double(buf);
	return (0);
}*/
