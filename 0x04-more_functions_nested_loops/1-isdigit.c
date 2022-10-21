#include "main.h"
/**
 * _isdigit - check the char is the digit
 * @c: int to br checked
 * Return: 1 if the char is the digit , 0 otherwhise
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= 0 && c <= 9)
		y = 1;
	return (y);
}


