#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 (Succes)
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'a') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
