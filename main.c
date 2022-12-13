#include "main.h"
/**
 * main - main function
 * Return: 0
 */
int main(void)
{

	char **comand;
	char *l;

	signal(SIGINT, sighandler);
	while (1)

	{
		if (isatty(STDIN_FILENO))
		{
			_putchar('$');
			_putchar(' ');
		}

		else
		{
			l = get_line();
			comand = format_line(l);
			search_exe(comand);
			exec_com(comand);
			free(l);
			free(comand);
			return (0);
		}

		l = get_line();
		comand = format_line(l);
		if (*comand == NULL)
		{
			free(l);
			free(comand);
			continue;
		}
		search_exe(comand);
		exec_com(comand);
		free(l);
		free(comand);
	}
	return (0);
}

/**
 *  exec_com - execute comand
 * @comand: comand
 * Return: 1
 */
int exec_com(char **comand)
{
	pid_t pid;

	pid = fork();
	if (pid == 0 && execve(comand[0], comand, environ) == -1)
		perror("error");

	else
		wait(&pid);

	return (1);
}
