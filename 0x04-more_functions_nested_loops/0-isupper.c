#include "main.h"

/**
 * _isupper -checks if a character is uppercase
 * @c: Variable text
 * Return: Always 0;
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
