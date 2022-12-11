#include "main.h"
/**
 * sighandler - handle signit
 * @i: int
 */
void sighandler(int i)
{
	if (i)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}
#define TOKEN_DELIM " \t\r\n\a"
/**
 * format_line - format line
 * @l: line
 * Return: tokens
 */
char **format_line(char *l)
{
	int bufsize = 64, i = 0;
	char **argv = malloc(bufsize * sizeof(char *));
	char *token;

	if (argv == NULL)
	{
		perror("malloc error\n");
		return (NULL);
	}

	token = strtok(l, TOKEN_DELIM);
	while (token != NULL)
	{
		argv[i] = token;
		i++;

		if (i >= bufsize)
		{
			bufsize = bufsize + 64;
			argv = realloc(argv, bufsize * sizeof(char *));
			if (argv == NULL)
			{
				perror("malloc error\n");
				return (NULL);
			}
		}

		token = strtok(NULL, TOKEN_DELIM);
	}
	argv[i] = NULL;
	return (argv);
}

/**
 * get_line - getline
 * Return: l
 */
char *get_line(void)
{

	char *l = NULL;
	unsigned long bufsize = 0;

	getline(&l, &bufsize, stdin);

	return (l);
}
#include <unistd.h>
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
**/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
