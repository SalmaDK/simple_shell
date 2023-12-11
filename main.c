#include "simple_shell.h"

/**
 * main - Entry point for the simple shell program.
 *
 * Return: Always 0.
 */
int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		handle_user_input();
	}
	else
	{
		handle_piped_input();
	}
	return (0);
}

