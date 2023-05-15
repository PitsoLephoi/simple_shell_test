#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024
#define PROMPT "#cisfun$ "
#define BUFFER_SIZE 1024

/* parse.c */
#define MAX_ARGS 64

/* main.c */

void display_prompt();
char* read_input();
char** parse_input(char* input);
int execute_command(char** args);
void free_memory(char** args);

#endif /* SHELL_H */
