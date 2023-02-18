#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alp = 'a';

	while (alp < 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

