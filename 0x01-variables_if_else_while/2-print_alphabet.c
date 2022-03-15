#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * Description: loops over while incrementing char value
 * Return: 0
 **/
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
