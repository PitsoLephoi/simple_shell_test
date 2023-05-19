#include "shell.h"

/**
 * main - Entry point of the shell program
 *
 * Description: The main function of the shell program. It sets up the signal
 *              handler, displays the prompt, and enters a loop to read input,
 *              parse it, and execute commands until the exit condition is met.
 *
 * Return: Always returns 0.
 */
int main(void)
{
    char *input;
    char **args;
    int should_exit = 0;
    
    signal(SIGINT, handle_signal);
    
    while (!should_exit)
    {
	display_prompt();
        input = read_input();
        args = parse_input(input);
        should_exit = execute_command(args);

        free(input);
        free(args);
    }

    return 0;
}
