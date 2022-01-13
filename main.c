#include "monty.h"
char **cmd = NULL;
/**
 * main - call monty
 * @ac: n args
 * @av: args
 * Return: always 0
 */
int main(int ac, char **av)
{
	FILE *file_d = NULL;
	int exit = 0;

	if (ac != 2)
		return (arg_error());

	file_d = fopen(av[1], "r");

	if (!file_d)
		return (open_error(av[1]));

	exit = (exec_monty(file_d));
	fclose(file_d);
	return (exit);
}
