#include <stdio.h>
/**
 * main - entry Prints.
 * Description: print 0-9 using putchar while using int variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
