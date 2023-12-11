#include "simple_shell.h"

/**
 * handleforkerror - Handles errors during the fork system call.
 */
void handle_fork_error(void)
{
	perror("fork");
}

/**
 * handleexecvperror - Handles errors during the execvp system call.
 * @command: The command that caused the error.
 */
void handle_execvp_error(const char *command)
{
	perror(command);
	exit(EXIT_FAILURE);
}

/**
 * handlewaitpiderror - Handles errors during the waitpid system call.
 */
void handle_waitpid_error(void)
{
	perror("waitpid");
}

/**
 * handle_getline_error - Handles errors during the getline system call.
 */
void handle_getline_error(void)
{
	perror("getline");
}

