#include <stdio.h>

/**
 * main - Prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpt[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpt[i]);
	}
	putchar('\n');
	return (0);
}
