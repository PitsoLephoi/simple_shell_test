#include "shell.h"

/**
 * parse_input - Parse the input string into separate arguments
 * @input: The input string to be parsed
 *
 * Return: An array of strings containing the parsed arguments
 */
char **parse_input(char *input)
{
	const char *delim = " \t\n";  /* Delimiters for strtok */
	char *token;                  /* Pointer to store each token */
	int arg_count = 0;            /* Counter for arguments */
	char **args = NULL;           /* Array to store arguments */

	token = strtok(input, delim);  /* Get the first token */

	while (token != NULL)
	{
		args = realloc(args, (arg_count + 1) * sizeof(char *));
		if (args == NULL)
		{
			perror("realloc");
			exit(EXIT_FAILURE);
		}

		args[arg_count] = token;  /* Store the token in args */
		arg_count++;

		token = strtok(NULL, delim);  /* Get the next token */
	}

	args = realloc(args, (arg_count + 1) * sizeof(char *));
	if (args == NULL)
	{
		perror("realloc");
		exit(EXIT_FAILURE);
	}
	args[arg_count] = NULL;  /* Set the last element of args to NULL */

	return args;
}
