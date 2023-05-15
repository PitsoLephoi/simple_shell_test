#include "shell.h"

char* read_input()
{
    char* input = NULL;
    size_t buffer_size = 0;
    ssize_t bytes_read = getline(&input, &buffer_size, stdin);

    if (bytes_read == -1) {
        perror("getline");
        exit(EXIT_FAILURE);
    }

    if (bytes_read > 0 && input[bytes_read - 1] == '\n') {
        input[bytes_read - 1] = '\0';
    }

    return (input);
}
