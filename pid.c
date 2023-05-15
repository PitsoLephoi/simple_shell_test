#include "shell.h"

pid_t getpid(void)
{
    pid_t parent_pid = getppid();
    printf("Parent PID: %d\n", parent_pid);
    return (parent_pid);
}
