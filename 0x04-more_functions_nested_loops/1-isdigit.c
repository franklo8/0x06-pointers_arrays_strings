#include "main.h"
/**
 * _isdigit - Callout function
 *
 * @c: Is it a digit between 0 through 9
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
