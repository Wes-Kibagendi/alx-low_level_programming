#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Description: while loop
 * Return: 0
 **/

int main(void)
{
	int ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
