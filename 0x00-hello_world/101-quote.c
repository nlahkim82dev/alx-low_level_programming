#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; txt[i]; i++)
	{
		putchar(txt[i]);
	}
	putchar("\n");
	return (1);
}
