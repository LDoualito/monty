#include "monty.h"
/**
 * arg_error - print several error cases
 * Return: Exit failure
 */

int arg_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - malloc error
 * Return: exit failure
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * open_error - open error
 * @str: file name
 * Return: exit failure
 */
int open_error(char *str)
{
	fprintf(stderr, "Error: Can't open file %s\n", str);
	exit(EXIT_FAILURE);
}
/**
 * invalid_error - invalid instruction
 * @str: file name
 * @nline: line number
 * Return: exit failure
 */
int invalid_error(char *str, unsigned int nline)
{
	fprintf(stderr, "L%u: unknow instruction %s\n", nline, str);
	exit(EXIT_FAILURE);
}
/**
 * int_error - int error
 * @nline: line number
 * Return: exit failure
 */
int int_error(unsigned int nline)
{
	fprintf(stderr, "L%u: usage: push integer\n", nline);
	exit(EXIT_FAILURE);
}
