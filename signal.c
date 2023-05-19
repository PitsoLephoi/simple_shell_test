#include "shell.h"


void handle_signal(int m)
{
    (void)m;
    if (isatty(STDIN_FILENO))
        write(STDOUT_FILENO, "\n$ ", 3);
}
