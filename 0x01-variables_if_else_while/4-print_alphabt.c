#include <stdio.h>

/**
 * main - prints alphabets exclusive of e and f in lowercase
 * Description: Combine while loop and if conditions
 * Return: 0
 **/
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
