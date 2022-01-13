#include "monty.h"
/**
 * _isdigit - check for digit
 * @c: int to check
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _isnumber - check for number
 * @str: string to check
 * Return: 1 for number else 0
 */
int _isnumber(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
