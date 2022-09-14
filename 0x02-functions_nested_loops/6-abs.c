#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an interger
 * @n: The int to be operated upon
 * author: Elbee
 * Return: returns an unsigned int value to calling function
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
