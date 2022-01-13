#include "monty.h"
/**
 * pint_error - print error
 * @nline: nline
 * Return: Exit failure
 */
int pint_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", nline);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - print error
 * @nline: nline
 * Return: Exit failure
 */

int pop_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", nline);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - print error
 * @nline: nline
 * Return: Exit failure
 */

int swap_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", nline);
	exit(EXIT_FAILURE);
}

/**
 * add_error - print error
 * @nline: nline
 * Return: Exit failure
 */

int add_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", nline);
	exit(EXIT_FAILURE);
}

/**
 * sub_error - print error
 * @nline: nline
 * Return: Exit failure
 */

int sub_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", nline);
	exit(EXIT_FAILURE);
}
