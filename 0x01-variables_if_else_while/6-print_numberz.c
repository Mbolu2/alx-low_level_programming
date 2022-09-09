#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all single digit number from ten down
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int man;

	for (man = 48; man < 58; man++)
		putchar(man);
	putchar('\n');
	return (0);
}
