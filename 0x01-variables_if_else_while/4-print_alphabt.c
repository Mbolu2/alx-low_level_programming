#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: letter in alphabetical order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sammy;

	for (sammy = 'a'; sammy <= 'z'; sammy++)
	{
		if (sammy != 'q' && sammy != 'e')
			putchar(sammy);
	}
	putchar('\n');
	return (0);
}

