#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

/* Standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <limits.h>

/* Function prototypes */
int execute_command(char *command, char *args[]);
void display_prompt(void);
void handle_piped_input(void);
void handle_user_input(void);

/* Declare the error handling functions */
void handle_fork_error(void);
void handle_execvp_error(const char *command);
void handle_waitpid_error(void);
void handle_getline_error(void);

/* Declare the external variable */
extern char **environ;

#endif /* SIMPLE_SHELL_H */

