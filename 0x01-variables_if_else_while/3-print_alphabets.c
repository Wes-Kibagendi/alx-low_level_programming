#include <stdio.h>

/**
 * main - prints both lowercase and uppercase alphabets
 * Description: char is an integral type and thus can be looped
 * Return: 0
 **/
int main(void)
{
	int lower_case;
	int upper_case;

	lower_case = 'a';
	upper_case = 'A';
	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (0);
}
