#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: From up to down
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char man;

	for (man = 'z'; man >= 'a'; man--)

		putchar(man);

	putchar('\n');
	return (0);
}
