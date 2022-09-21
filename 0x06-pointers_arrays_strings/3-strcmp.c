#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 *
 * Return: less than zero if 1st string is less than 2nd string
 * zero if they are equal, more than zero if 1st string
 * is greater than 2nd string
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
