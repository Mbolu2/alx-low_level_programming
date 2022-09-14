#include <unistd.h>

/**
 * _putchar - writes the character to c to stdout
 * @c: The characte to print
 *
 * Return: On success 1.
 * on erri, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
