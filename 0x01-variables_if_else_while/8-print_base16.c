#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: he be like say na hexa
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int man;
	char woman;

	for (man = 48; man < 58; man++)
		putchar(man);
	for (woman = 'a'; woman <= 'f'; woman++)
		putchar(woman);
	putchar('\n');
	return (0);
}
