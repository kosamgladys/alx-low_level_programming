#include <stdio.h>
/**
 * main - This function will print an output
 * Return: 0 (Success)
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(c, stderr);
	return (1);
}
