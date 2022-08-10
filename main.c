#include "shell.h"

/**
 * main - Entry point
 *
 * Description: Simple shell project
 *
 * Return: Always 0
 */
int main(void)
{
	char **argv;
	char *str = NULL;
	int res;
	size_t num = 0;
	path_t *path_list;

	cpyEnviron();
	path_list = path();
	while (1)
	{
		signal(SIGINT, signal_handler);
		if (isatty(STDIN_FILENO))
			_printf("$ ");
		res = getline(&str, &num, stdin);
		if (res == -1)
		{
			if (isatty(STDIN_FILENO))
				_printf("\n");
			break;
		}
		if (str[0] != '\n')
		{
			argv = str_to_arr(str);
			argv[0] = path_finder(argv, path_list, str);
			if (argv[0] && access(argv[0], X_OK) == 0)
				execute(argv[0], argv);
			else
				perror("./hsh");

			free(argv);
		}
	}

	free(str);
	return (0);
}
