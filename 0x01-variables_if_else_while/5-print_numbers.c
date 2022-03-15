#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * Description: while loop
 * Return: 0
 **/

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
