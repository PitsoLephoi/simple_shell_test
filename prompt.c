#include "shell.h"


void display_prompt()
{
    const char* prompt = "#cisfun$ ";
    ssize_t bytes_written = write(STDOUT_FILENO, prompt, strlen(prompt));
    if (bytes_written == -1) {
        perror("write");
        exit(EXIT_FAILURE);
    }
}
