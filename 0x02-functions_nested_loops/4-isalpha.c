#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter
 * @c: unsigned int value
 * Return: Elbee
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
