#include "shell.h"

extern int errno;

/**
 * perror - Print error message
 * @s: Error message prefix
 *
 * Description: The perror() function prints a descriptive error message to
 * the standard error stream, based on the value of the global 'errno' variable.
 * The error message is prefixed with the string pointed to by 's', followed by
 * a colon and a space.
 */
void perror(const char *s)
{
    if (s != NULL && *s != '\0')
        fprintf(stderr, "%s: %s\n", s, strerror(errno));
    else
        fprintf(stderr, "%s\n", strerror(errno));
}
