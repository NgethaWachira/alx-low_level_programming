#include <stdio.h>
#include <ctype.h>

/**
 * main - program prints alphabets followed by a nnew line
 *
 * Return: return
 *
*/

int main(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
