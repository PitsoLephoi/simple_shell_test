#include "shell.h"

/**
 * echo - Print the given arguments to the standard output.
 * @args: Array of strings containing the arguments.
 *
 * Description: This function prints the arguments to the standard output,
 *              excluding the command itself. Each argument is separated by
 *              a space, and a newline character is added at the end.
 */
void execute_echo(char **args)
{
	int i = 1;

	while (args[i] != NULL)
	{
		printf("%s ", args[i]);
		i++;
	}

	printf("\n");
}
