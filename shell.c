#include "shell.h"

int main(void)
{
    char *input;
    char **args;
    int should_exit = 0;

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
