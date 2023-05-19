#include "shell.h"

/**
 * execute_command - Executes a command or handles special commands
 * @args: The arguments array containing the command and its arguments
 *
 * Return: 0 on success, -1 on failure
 */
int execute_command(char **args)
{
    pid_t child_pid;
    int status;

    if (strcmp(args[0], "echo") == 0)
    {
        /* Call execute_echo for echo command */
        execute_echo(args);
        return 0;
    }

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("fork");
        return -1;
    }
    if (child_pid == 0)
    {
        /* Child process */
        if (execve(args[0], args, NULL) == -1)
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        /* Parent process */
        if (waitpid(child_pid, &status, 0) == -1)
        {
            perror("waitpid");
            return -1;
        }
    }

    return (0);
}
