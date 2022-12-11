#include "main.h"
/**
 * _getenv - getenv
 * @name: name
 * Return: NULL
 */
char *_getenv(char *name)
{
	int i = 0;
	char *val;

	unsigned long lenValue, lenName = strlen(name);

	while (environ[i] != NULL)

	{
		lenValue = strlen(environ[i]) - lenName;
		val = malloc(lenValue * sizeof(char));
		if (val == NULL)
		{
			perror("failed to allocate value");
			return (NULL);
		}
		if (strncmp(name, environ[i], lenName) == 0 && strcpy(val, environ[i]))
			return (val);

		i++;
	}

	return (NULL);
}
/**
 * comp - compose token and value
 * @token: token
 * @val: value
 * Return: composed string
 */
char *comp(char *token, char *val)
{
	char *exe;
	unsigned long len = strlen(token) + strlen(val) + 1;

	exe = malloc(sizeof(char) * len);

	if (exe == NULL)
		return (NULL);

	strcat(exe, val);
	strcat(exe, "/");
	exe = strcat(exe, token);

	return (exe);
}
/**
 * search_exe - search executable
 * @exe: command
 */
void search_exe(char **exe)
{
	struct stat statbuf;
	char *exe_path, *value, *path;

	path = strdup(getenv("PATH"));
	value = strtok(path, ":");
	while (value != NULL)
	{
		exe_path = comp(*exe, value);

		if (stat(exe_path, &statbuf) == 0)
		{

			*exe = strdup(exe_path);
			free(exe_path);
			free(path);
			return;
		}

		value = strtok(NULL, ":");
	}

	free(path);
}
