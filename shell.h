#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define MAX_INPUT_SIZE 1024
#define PROMPT "#cisfun$ "
#define BUFFER_SIZE 1024

/* parse.c */
#define MAX_ARGS 64

/* signals.c */
void handle_signal(int m);

/* builtin.c */
void execute_echo(char **args);

/* shell.c */
void display_prompt();
char* read_input();
char** parse_input(char* input);
int execute_command(char** args);
void free_memory(char** args);

/* errors.c */
void perror(const char *s);

/* malloc.c */
void *allocate_memory(size_t size);
void deallocate_memory(void *ptr);

#endif /* SHELL_H */
